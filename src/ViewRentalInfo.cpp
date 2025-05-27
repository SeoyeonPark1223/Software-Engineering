#include "ViewRentalInfo.h"

// 생성자: userCollection 포인터 저장
ViewRentalInfo::ViewRentalInfo(UserCollection* userCollection) 
    : userCollection(userCollection) {}


// memeber 유저면 대여 자전거 리스트를 반환
std::vector<Bicycle*> ViewRentalInfo::viewRentalInfo() {
    User* user = userCollection->getCurrentUser();
    if (user->getRoleType() == RoleType::MEMBER) {
        return user->getRentalBicycleList();
    }
    return {};
}