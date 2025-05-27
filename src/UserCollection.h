#ifndef USER_COLLECTION_H
#define USER_COLLECTION_H

#include "User.h"
#include <vector>
#include <string>

// 유저를 관리하기 위한 Entity 클래스
class UserCollection {
private:
    std::vector<User*> userList;
    User* currentUser = nullptr;

public:
    UserCollection(); // 생성자
    void addNewUser(User* user); // 새로운 유저를 userList에 추가
    User* getUserById(std::string id) const; // 유저를 id에 따라 조회하여 반환
    User* getCurrentUser() const; // 현재 로그인된 유저를 반환
    void setCurrentUser(User* user); // 현재 로그인된 유저를 지정
};

#endif