#include "RegisterBicycleUI.h"

RegisterBicycleUI::RegisterBicycleUI(RegisterBicycle* registerBicycle) 
    : registerBicycle(registerBicycle) {}

void RegisterBicycleUI::showInterface(std::ofstream& out_fp) {
    out_fp << "3.1. 자전거 등록\n";
}

void RegisterBicycleUI::inputBicycleInfo(std::ifstream& in_fp, std::ofstream& out_fp) {
    std::string id, brand;
    in_fp >> id >> brand;

    std::tuple<std::string, std::string> result = registerBicycle->registerBicycle(id, brand);
    
    out_fp << "> " << std::get<0>(result) << " "
           << std::get<1>(result) << "\n\n";
}