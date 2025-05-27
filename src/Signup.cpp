#include "Signup.h"
#include "User.h"

// 생성자: userCollection 포인터 저장
Signup::Signup(UserCollection* userCollection) 
    : userCollection(userCollection) {}

// 회원가입에 필요한 정보를 받아서 회원가입 처리 (member로 role 등록)
std::tuple<std::string, std::string, std::string> Signup::signup(std::string id, std::string password, std::string phoneNumber) {
    User* newUser = new User(id, password, RoleType::MEMBER, phoneNumber);
    userCollection->addNewUser(newUser);
    return std::make_tuple(id, password, phoneNumber);
}