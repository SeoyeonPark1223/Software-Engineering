#ifndef LOGOUT_H
#define LOGOUT_H

#include "UserCollection.h"

// 로그아웃을 위한 Control 클래스
class Logout {
    private:
        UserCollection* userCollection;
    public:
        Logout(UserCollection* userCollection); // 생성자
        std::string logout(); // 로그아웃 요청을 처리
};

#endif