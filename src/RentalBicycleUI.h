#ifndef RENTAL_BICYCLE_UI_H
#define RENTAL_BICYCLE_UI_H

#include "RentalBicycle.h"
#include <fstream>

// 자전거 대여를 위한 UI 클래스
class RentalBicycleUI {
    private:
        RentalBicycle* rentalBicycle;
    public: 
        RentalBicycleUI(RentalBicycle* rentalBicycle); // 생성자
        void showInterface(std::ofstream& out_fp); // 메뉴 헤더 인터페이스 출력
        void rentalBicycleRequest(std::ifstream& in_fp, std::ofstream& out_fp); // 자전거 대여 요청 결과를 출력
};

#endif