#ifndef BICYCLE_COLLECTION_H
#define BICYCLE_COLLECTION_H

#include "Bicycle.h"
#include <vector>

class BicycleCollection {
    private:
        std::vector<Bicycle*> bicycleList;
    public:
        BicycleCollection();
        void addBicycle(Bicycle* bicycle);
        Bicycle* getBicycleById(std::string id);
};

#endif
