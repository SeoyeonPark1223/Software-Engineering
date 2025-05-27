#include "RentalBicycleUI.h"

// 생성자: rentalBicycle 포인터 저장
RentalBicycleUI::RentalBicycleUI(RentalBicycle* rentalBicycle)
    : rentalBicycle(rentalBicycle) {}

// 메뉴 헤더 인터페이스 출력
void RentalBicycleUI::showInterface(std::ofstream& out_fp) {
    out_fp << "4.1. 자전거 대여\n";
}

// 자전거 대여 요청 결과로 id를 출력
void RentalBicycleUI::rentalBicycleRequest(std::ifstream& in_fp, std::ofstream& out_fp) {
    std::string id;
    in_fp >> id;

    auto result = rentalBicycle->rentalBicycle(id);
    
    out_fp << "> " << std::get<0>(result) << " "
           << std::get<1>(result) << "\n\n";
}
