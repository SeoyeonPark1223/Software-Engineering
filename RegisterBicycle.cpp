#include "RegisterBicycle.h"
#include "UserCollection.h"

RegisterBicycle::RegisterBicycle(BicycleCollection* bicycleCollection, UserCollection* userCollection) 
    : bicycleCollection(bicycleCollection), userCollection(userCollection) {}

std::tuple<std::string, std::string> RegisterBicycle::registerBicycle(std::string id, std::string brand) {
    User* user = userCollection->getCurrentUser();
    if (user->getRoleType() == RoleType::ADMIN) {
        Bicycle* bicycle = new Bicycle(id, brand);
        bicycleCollection->addBicycle(bicycle);
        return std::make_tuple(id, brand);
    }

    return std::make_tuple("", "");
}