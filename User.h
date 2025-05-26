#ifndef USER_H
#define USER_H

#include "Bicycle.h"
#include <vector>
#include <string>

enum class RoleType {
    ADMIN, 
    MEMBER
};

class Bicycle;

class User {
    private:
        std::string id;
        std::string password;
        RoleType role;
        std::string phoneNumber;
        bool loginStatus;
        std::vector<Bicycle*> rentalBicycleList;
    public: 
        User(std::string id, std::string password, RoleType role, std::string phoneNumber); // MEMBER
        User(std::string id, std::string password, RoleType role); // ADMIN

        std::string getId() const;
        RoleType getRoleType() const;
        bool checkIdAndPassword(std::string id, std::string password) const;
        void setLoginStatus(bool status);
        void addRentalBicycleList(Bicycle* bicycle);
        std::vector<Bicycle*> getRentalBicycleList() const;
};

#endif