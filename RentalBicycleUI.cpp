#include "RentalBicycleUI.h"

RentalBicycleUI::RentalBicycleUI(RentalBicycle* rentalBicycle)
    : rentalBicycle(rentalBicycle) {}

void RentalBicycleUI::showInterface(std::ofstream& out_fp) {
    out_fp << "4.1. 자전거 대여\n";
}

void RentalBicycleUI::rentalBicycleRequest(std::ifstream& in_fp, std::ofstream& out_fp) {
    std::string id, brand;
    in_fp >> id >> brand;

    auto result = rentalBicycle->rentalBicycle(id, brand);
    
    out_fp << std::get<0>(result) << " "
           << std::get<1>(result) << std::endl;
}
