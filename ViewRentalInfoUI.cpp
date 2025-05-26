#include "ViewRentalInfoUI.h"

ViewRentalInfoUI::ViewRentalInfoUI(ViewRentalInfo* viewRentalInfo) 
    : viewRentalInfo(viewRentalInfo) {}

void ViewRentalInfoUI::showInterface(std::ofstream& out_fp) {
    out_fp << "5.1. 자전거 대여 리스트\n";
}

void ViewRentalInfoUI::viewRentalInfoRequest(std::ofstream& out_fp) {
    std::vector<Bicycle*> resultList = viewRentalInfo->viewRentalInfo();
    std::sort(resultList.begin(), resultList.end(), [](Bicycle* a, Bicycle* b) {
    return a->getId() < b->getId();
    });
    for (Bicycle* result : resultList) {
        out_fp << "> " << result->getId() << " " << result->getBrand() << "\n";
    } out_fp << "\n";
}