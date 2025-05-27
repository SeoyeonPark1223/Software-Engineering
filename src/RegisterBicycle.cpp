#include "RegisterBicycle.h"
#include "UserCollection.h"

// 생성자: userCollection, bicycleCollection의 포인터를 저장
RegisterBicycle::RegisterBicycle(BicycleCollection* bicycleCollection, UserCollection* userCollection) 
    : bicycleCollection(bicycleCollection), userCollection(userCollection) {}

// 유저가 admin일 경우 자전거 등록을 위한 정보를 가지고 자전거 등록 요청 처리
std::tuple<std::string, std::string> RegisterBicycle::registerBicycle(std::string id, std::string brand) {
    User* user = userCollection->getCurrentUser();
    if (user->getRoleType() == RoleType::ADMIN) {
        Bicycle* bicycle = new Bicycle(id, brand);
        bicycleCollection->addBicycle(bicycle);
        return std::make_tuple(id, brand);
    }

    return std::make_tuple("", "");
}