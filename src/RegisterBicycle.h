#ifndef REGISTER_BICYCLE_H
#define REGISTER_BICYCLE_H

#include "BicycleCollection.h"
#include "UserCollection.h"

// 자전거 등록을 위한 Control 클래스
class RegisterBicycle {
    private:
        BicycleCollection* bicycleCollection;
        UserCollection* userCollection;

    public:
        RegisterBicycle(BicycleCollection* bicycleCollection, UserCollection* userCollection); // 생성자
        std::tuple<std::string, std::string> registerBicycle(std::string id, std::string brand); // 자전거 등록을 위한 정보를 가지고 자전거 등록 요청 처리
};

#endif