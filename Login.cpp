#include "Login.h"

Login::Login(UserCollection* userCollection)
    : userCollection(userCollection) {}

std::tuple<std::string, std::string> Login::login(std::string id, std::string password) {
    User* user = userCollection->getUserById(id);

    if (user->checkIdAndPassword(id, password)) {
        user->setLoginStatus(true);
        userCollection->setCurrentUser(user);
        return std::make_tuple(id, password);
    }
    return std::make_tuple("", "");
}