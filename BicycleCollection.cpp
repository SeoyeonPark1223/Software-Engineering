#include "BicycleCollection.h"

BicycleCollection::BicycleCollection() {}

void BicycleCollection::addBicycle(Bicycle* bicycle) {
    bicycleList.push_back(bicycle);
}

Bicycle* BicycleCollection::getBicycleById(std::string id) {
    for (Bicycle* bicycle: bicycleList) {
        if (std::get<0>(bicycle->getBicycleDetails()) == id) {
            return bicycle;
        }
    }
    return nullptr;
}