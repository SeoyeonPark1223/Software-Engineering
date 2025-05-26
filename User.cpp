#include "User.h"

User::User(std::string id, std::string password, RoleType role, std::string phoneNumber)
    : id(id), password(password), role(role), phoneNumber(phoneNumber), loginStatus(false) {}

User::User(std::string id, std::string password, RoleType role)
    : id(id), password(password), role(role), loginStatus(false) {}


std::string User::getId() const {
    return id;
}

RoleType User::getRoleType() const {
    return role;
}

bool User::checkIdAndPassword(std::string pId, std::string pwd) const {
    if (id == pId && password == pwd) return true;
    else return false;
}

void User::setLoginStatus(bool status) {
    loginStatus = status;
}

void User::addRentalBicycleList(Bicycle* bicycle) {
    rentalBicycleList.push_back(bicycle);
}

std::vector<Bicycle*> User::getRentalBicycleList() const {
    return rentalBicycleList;
}