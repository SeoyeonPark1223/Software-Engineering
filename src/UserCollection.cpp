#include "UserCollection.h"

// 생성자: 하드코딩으로 admin 유저 생성
UserCollection::UserCollection() {
    if (this->getUserById("admin") == nullptr) {
        User* admin = new User("admin", "admin", RoleType::ADMIN, {});
        this->addNewUser(admin);
    }
}

// 새로운 유저를 userList에 추가
void UserCollection::addNewUser(User* user) {
    userList.push_back(user);
}

// userList를 순회하며 유저를 id에 따라 조회하여 반환
User* UserCollection::getUserById(std::string id) const {
    for (User* user : userList) {
        if (user->getId() == id) {
            return user;
        }
    }
    return nullptr;
}

// 현재 로그인된 유저를 반환
User* UserCollection::getCurrentUser() const {
    return currentUser;
}

// 현재 로그인된 유저를 지정
void UserCollection::setCurrentUser(User* user) {
    currentUser = user;
}