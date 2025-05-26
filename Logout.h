#ifndef LOGOUT_H
#define LOGOUT_H

#include "UserCollection.h"

class Logout {
    private:
        UserCollection* userCollection;
    public:
        Logout(UserCollection* userCollection);
        std::string logout();
};

#endif