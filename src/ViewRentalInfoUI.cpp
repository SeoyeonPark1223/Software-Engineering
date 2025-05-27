#include "ViewRentalInfoUI.h"

// 생성자: viewRentalInfo 포인터 저장
ViewRentalInfoUI::ViewRentalInfoUI(ViewRentalInfo* viewRentalInfo) 
    : viewRentalInfo(viewRentalInfo) {}

// 메뉴 헤더 인터페이스 출력
void ViewRentalInfoUI::showInterface(std::ofstream& out_fp) {
    out_fp << "5.1. 자전거 대여 리스트\n";
}

// 대여 정보 조회 결과를 id순으로 정렬하여 각 bicycle의 id와 brand값 출력
void ViewRentalInfoUI::viewRentalInfoRequest(std::ofstream& out_fp) {
    std::vector<Bicycle*> resultList = viewRentalInfo->viewRentalInfo();
    std::sort(resultList.begin(), resultList.end(), [](Bicycle* a, Bicycle* b) {
    return a->getId() < b->getId();
    });
    for (Bicycle* result : resultList) {
        out_fp << "> " << result->getId() << " " << result->getBrand() << "\n";
    } out_fp << "\n";
}