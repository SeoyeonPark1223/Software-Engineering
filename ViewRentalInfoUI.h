#ifndef VIEW_RENTAL_INFO_UI_H
#define VIEW_RENTAL_INFO_UI_H

#include "ViewRentalInfo.h"
#include <fstream>
#include <algorithm>

class ViewRentalInfoUI {
    private: 
        ViewRentalInfo* viewRentalInfo;
    public: 
        ViewRentalInfoUI(ViewRentalInfo* viewRentalInfo);
        void showInterface(std::ofstream& out_fp);
        void viewRentalInfoRequest(std::ofstream& out_fp);
};

#endif