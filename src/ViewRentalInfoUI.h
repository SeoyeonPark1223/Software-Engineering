#ifndef VIEW_RENTAL_INFO_UI_H
#define VIEW_RENTAL_INFO_UI_H

#include "ViewRentalInfo.h"
#include <fstream>
#include <algorithm>

// 자전거 대여 정보 조회를 위한 UI 클래스
class ViewRentalInfoUI {
    private: 
        ViewRentalInfo* viewRentalInfo;
    public: 
        ViewRentalInfoUI(ViewRentalInfo* viewRentalInfo); // 생성자
        void showInterface(std::ofstream& out_fp); // 메뉴 헤더 인터페이스 출력
        void viewRentalInfoRequest(std::ofstream& out_fp); // 대여 정보 조회 결과 출력
};

#endif