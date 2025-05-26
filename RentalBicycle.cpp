#include "RentalBicycle.h"

RentalBicycle::RentalBicycle(BicycleCollection* bicycleCollection, UserCollection* userCollection) 
    : bicycleCollection(bicycleCollection), userCollection(userCollection) {}

std::tuple<std::string, std::string> RentalBicycle::rentalBicycle(std::string id, std::string brand) {
    User* user = userCollection->getCurrentUser();
    Bicycle* bicycle = bicycleCollection->getBicycleById(id);

    if (user->getRoleType() == RoleType::MEMBER && bicycle->getRentalStatus() == false) {
        bicycle->setRentalStatus(true);
        user->addRentalBicycleList(bicycle);
        return std::make_tuple(id, brand);
    }

    return std::make_tuple("", "");
}