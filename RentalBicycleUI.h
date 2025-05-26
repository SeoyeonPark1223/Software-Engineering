#ifndef RENTAL_BICYCLE_UI_H
#define RENTAL_BICYCLE_UI_H

#include "RentalBicycle.h"
#include <fstream>

class RentalBicycleUI {
    private:
        RentalBicycle* rentalBicycle;
    public: 
        RentalBicycleUI(RentalBicycle* rentalBicycle);
        void showInterface(std::ofstream& out_fp);
        void rentalBicycleRequest(std::ifstream& in_fp, std::ofstream& out_fp);
};

#endif