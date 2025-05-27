#include "RentalBicycle.h"

// 생성자: bicycleCollection, userCollection의 포인터를 저장
RentalBicycle::RentalBicycle(BicycleCollection* bicycleCollection, UserCollection* userCollection) 
    : bicycleCollection(bicycleCollection), userCollection(userCollection) {}

// memeber일 경우 자전거 id를 받아서 해당 자전거 대여 요청 처리
std::tuple<std::string, std::string> RentalBicycle::rentalBicycle(std::string id) {
    User* user = userCollection->getCurrentUser();
    Bicycle* bicycle = bicycleCollection->getBicycleById(id);

    if (user->getRoleType() == RoleType::MEMBER && bicycle->getRentalStatus() == false) {
        bicycle->setRentalStatus(true);
        user->addRentalBicycleList(bicycle);
        return std::make_tuple(id, bicycle->getBrand());
    }

    return std::make_tuple("", "");
}