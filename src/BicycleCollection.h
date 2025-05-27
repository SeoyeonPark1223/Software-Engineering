#ifndef BICYCLE_COLLECTION_H
#define BICYCLE_COLLECTION_H

#include "Bicycle.h"
#include <vector>

// 자전거를 관리하기 위한 Entity 클래스 
class BicycleCollection {
    private:
        std::vector<Bicycle*> bicycleList;
    public:
        BicycleCollection(); // 생성자 
        void addBicycle(Bicycle* bicycle); // 자전거를 bicycleList에 추가
        Bicycle* getBicycleById(std::string id); // id로 자전거를 조회하여 객체 반환
};

#endif
