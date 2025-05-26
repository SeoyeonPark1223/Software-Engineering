#ifndef SIGNUP_H
#define SIGNUP_H

#include "UserCollection.h"

class Signup {
    private:
        UserCollection* userCollection;
    public: 
        Signup(UserCollection* UserCollection);
        std::tuple<std::string, std::string, std::string> signup(std::string id, std::string password, std::string phonenumber);
};

#endif