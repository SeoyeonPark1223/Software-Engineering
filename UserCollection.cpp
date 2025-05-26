#include "UserCollection.h"

UserCollection::UserCollection() {
    if (this->getUserById("admin") == nullptr) {
        User* admin = new User("admin", "admin", RoleType::ADMIN, {});
        this->addNewUser(admin);
    }
}

void UserCollection::addNewUser(User* user) {
    userList.push_back(user);
}

User* UserCollection::getUserById(std::string id) const {
    for (User* user : userList) {
        if (user->getId() == id) {
            return user;
        }
    }
    return nullptr;
}

User* UserCollection::getCurrentUser() const {
    return currentUser;
}

void UserCollection::setCurrentUser(User* user) {
    currentUser = user;
}