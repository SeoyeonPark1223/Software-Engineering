#ifndef RENTAL_BICYCLE_H
#define RENTAL_BICYCLE_H

#include "BicycleCollection.h"
#include "UserCollection.h"

class RentalBicycle {
    private: 
        BicycleCollection* bicycleCollection;
        UserCollection* userCollection;
    public: 
        RentalBicycle(BicycleCollection* bicycleCollection, UserCollection* userCollection);
        std::tuple<std::string, std::string> rentalBicycle(std::string id, std::string brand);
};

#endif