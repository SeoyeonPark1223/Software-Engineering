#include "BicycleCollection.h"

// 생성자: 초기화
BicycleCollection::BicycleCollection() {}

// 자전거를 bicycleList에 추가
void BicycleCollection::addBicycle(Bicycle* bicycle) {
    bicycleList.push_back(bicycle);
}

// bicycleList에서 순회하며 id값이 같은 bicycle을 조회하여 객체 반환
Bicycle* BicycleCollection::getBicycleById(std::string id) {
    for (Bicycle* bicycle: bicycleList) {
        if (std::get<0>(bicycle->getBicycleDetails()) == id) {
            return bicycle;
        }
    }
    return nullptr;
}