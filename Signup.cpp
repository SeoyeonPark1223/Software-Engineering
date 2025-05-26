#include "Signup.h"
#include "User.h"

Signup::Signup(UserCollection* userCollection) 
    : userCollection(userCollection) {}

std::tuple<std::string, std::string, std::string> Signup::signup(std::string id, std::string password, std::string phoneNumber) {
    User* newUser = new User(id, password, RoleType::MEMBER, phoneNumber);
    userCollection->addNewUser(newUser);
    return std::make_tuple(id, password, phoneNumber);
}