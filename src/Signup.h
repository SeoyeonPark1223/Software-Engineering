#ifndef SIGNUP_H
#define SIGNUP_H

#include "UserCollection.h"

// 회원가입을 위한 Control 클래스
class Signup {
    private:
        UserCollection* userCollection;
    public: 
        Signup(UserCollection* UserCollection); // 생성자
        std::tuple<std::string, std::string, std::string> signup(std::string id, std::string password, std::string phonenumber); // 회원가입에 필요한 정보를 받아서 회원가입 처리
};

#endif