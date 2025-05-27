#ifndef LOGIN_H
#define LOGIN_H

#include "UserCollection.h"

// 로그인을 위한 Control 클래스
class Login {
    private:
        UserCollection* userCollection;
    public: 
        Login(UserCollection* UserCollection); // 생성자
        std::tuple<std::string, std::string> login(std::string id, std::string password); // 로그인을 위해 필요한 정보로 유저 확인 후 로그인 처리
};

#endif