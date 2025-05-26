#include "ViewRentalInfo.h"

ViewRentalInfo::ViewRentalInfo(UserCollection* userCollection) 
    : userCollection(userCollection) {}


std::vector<Bicycle*> ViewRentalInfo::viewRentalInfo() {
    User* user = userCollection->getCurrentUser();
    if (user->getRoleType() == RoleType::MEMBER) {
        return user->getRentalBicycleList();
    }
    return {};
}