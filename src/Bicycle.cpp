#include "Bicycle.h"

// 생성자: id, brand 값을 받아서 객체 초기화
Bicycle::Bicycle(std::string bid, std::string brandName) 
    : id(bid), brand(brandName), rentalStatus(false) {}

// 자전거의 id를 반환
std::string Bicycle::getId() {
    return id;
}

// 자전거의 brand를 반환
std::string Bicycle::getBrand() {
    return brand;
}

// 자전거의 대여 상태를 지정
void Bicycle::setRentalStatus(bool status) {
    rentalStatus = status;
}

// 자전거의 id와 brand값을 조회
std::tuple<std::string, std::string> Bicycle::getBicycleDetails() const{
    return std::make_tuple(id, brand);
}

// 자전거의 대여 상태를 반환
bool Bicycle::getRentalStatus() const {
    return rentalStatus;
}