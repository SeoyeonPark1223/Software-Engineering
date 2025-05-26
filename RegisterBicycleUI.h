#ifndef REGISTER_BICYCLE_UI_H
#define REGISTER_BICYCLE_UI_H

#include "RegisterBicycle.h"
#include <fstream>

class RegisterBicycleUI {
    private:
        RegisterBicycle* registerBicycle;
    public: 
        RegisterBicycleUI(RegisterBicycle* RegisterBicycle);
        void showInterface(std::ofstream& out_fp);
        void inputBicycleInfo(std::ifstream& in_fp, std::ofstream& out_fp);
};

#endif