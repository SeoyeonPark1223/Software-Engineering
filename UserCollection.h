#ifndef USER_COLLECTION_H
#define USER_COLLECTION_H

#include "User.h"
#include <vector>
#include <string>

class UserCollection {
private:
    std::vector<User*> userList;
    User* currentUser = nullptr;

public:
    UserCollection();
    void addNewUser(User* user);
    User* getUserById(std::string id) const;
    User* getCurrentUser() const;
    void setCurrentUser(User* user);
};

#endif