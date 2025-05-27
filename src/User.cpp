#include "User.h"

// 생성자: member를 생성하기 위한 값을 받아서 user 객체 생성
User::User(std::string id, std::string password, RoleType role, std::string phoneNumber)
    : id(id), password(password), role(role), phoneNumber(phoneNumber), loginStatus(false) {}

// 생성자: admin를 생성하기 위한 값을 받아서 user 객체 생성
User::User(std::string id, std::string password, RoleType role)
    : id(id), password(password), role(role), loginStatus(false) {}

// 유저의 id를 반환
std::string User::getId() const {
    return id;
}

// 유저의 Role을 반환
RoleType User::getRoleType() const {
    return role;
}

// 받은 id와 password를 가지고 있는 유저 객체의 값과 비교하여 일치 여부 반환
bool User::checkIdAndPassword(std::string pId, std::string pwd) const {
    if (id == pId && password == pwd) return true;
    else return false;
}

// 유저의 로그인 상태 지정
void User::setLoginStatus(bool status) {
    loginStatus = status;
}

// 받은 bicycle을 유저의 rentalBicycleList에 추가
void User::addRentalBicycleList(Bicycle* bicycle) {
    rentalBicycleList.push_back(bicycle);
}

// rentalBicycleList를 조회
std::vector<Bicycle*> User::getRentalBicycleList() const {
    return rentalBicycleList;
}