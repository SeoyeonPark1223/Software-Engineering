#include "RegisterBicycleUI.h"

// 생성자: registerBicycle 포인터 저장
RegisterBicycleUI::RegisterBicycleUI(RegisterBicycle* registerBicycle) 
    : registerBicycle(registerBicycle) {}

// 메뉴 헤더 인터페이스를 출력
void RegisterBicycleUI::showInterface(std::ofstream& out_fp) {
    out_fp << "3.1. 자전거 등록\n";
}

// 자전거 등록 결과로 자전거의 id와 brand값 출력
void RegisterBicycleUI::inputBicycleInfo(std::ifstream& in_fp, std::ofstream& out_fp) {
    std::string id, brand;
    in_fp >> id >> brand;

    std::tuple<std::string, std::string> result = registerBicycle->registerBicycle(id, brand);
    
    out_fp << "> " << std::get<0>(result) << " "
           << std::get<1>(result) << "\n\n";
}