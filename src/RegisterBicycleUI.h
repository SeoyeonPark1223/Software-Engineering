#ifndef REGISTER_BICYCLE_UI_H
#define REGISTER_BICYCLE_UI_H

#include "RegisterBicycle.h"
#include <fstream>

// 자전거 등록을 위한 UI 클래스
class RegisterBicycleUI {
    private:
        RegisterBicycle* registerBicycle;
    public: 
        RegisterBicycleUI(RegisterBicycle* RegisterBicycle); // 생성자
        void showInterface(std::ofstream& out_fp); // 메뉴 헤더 인터페이스를 출력
        void inputBicycleInfo(std::ifstream& in_fp, std::ofstream& out_fp); // 자전거 등록 결과를 출력
};

#endif