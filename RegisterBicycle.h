#ifndef REGISTER_BICYCLE_H
#define REGISTER_BICYCLE_H

#include "BicycleCollection.h"
#include "UserCollection.h"

class RegisterBicycle {
    private:
        BicycleCollection* bicycleCollection;
        UserCollection* userCollection;

    public:
        RegisterBicycle(BicycleCollection* bicycleCollection, UserCollection* userCollection);
        std::tuple<std::string, std::string> registerBicycle(std::string id, std::string brand);
};

#endif