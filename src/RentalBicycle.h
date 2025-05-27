#ifndef RENTAL_BICYCLE_H
#define RENTAL_BICYCLE_H

#include "BicycleCollection.h"
#include "UserCollection.h"

// 자전거 대여를 위한 Control 클래스
class RentalBicycle {
    private: 
        BicycleCollection* bicycleCollection;
        UserCollection* userCollection;
    public: 
        RentalBicycle(BicycleCollection* bicycleCollection, UserCollection* userCollection); // 생성자
        std::tuple<std::string, std::string> rentalBicycle(std::string id); // 자전거 id를 받아서 해당 자전거 대여 요청 처리
};

#endif