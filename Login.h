#ifndef LOGIN_H
#define LOGIN_H

#include "UserCollection.h"

class Login {
    private:
        UserCollection* userCollection;
    public: 
        Login(UserCollection* UserCollection);
        std::tuple<std::string, std::string> login(std::string id, std::string password);
};

#endif