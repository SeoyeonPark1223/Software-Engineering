#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>

// 자전거를 위한 Entity 클래스
class Bicycle {
    private:
        std::string id;
        std::string brand;
        bool rentalStatus;
    public:     
        Bicycle(std::string id, std::string brand); // 생성자
        std::string getId(); // 자전거의 id를 반환
        std::string getBrand(); // 자전거의 brand를 반환
        void setRentalStatus(bool status); // 자전거의 대여 상태를 지정
        std::tuple<std::string, std::string> getBicycleDetails() const; // 자전거의 id와 brand값을 조회
        bool getRentalStatus() const; // 자전거의 대여 상태를 반환
};

#endif