#include "Logout.h"

Logout::Logout(UserCollection* userCollection)
    : userCollection(userCollection) {} 

std::string Logout::logout() {
    User* user = userCollection->getCurrentUser();
    if (user) {
        user->setLoginStatus(false);
        userCollection->setCurrentUser(nullptr);
        return user->getId();
    }
    return "";
}