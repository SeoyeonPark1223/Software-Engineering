#ifndef LOGOUT_UI_H
#define LOGOUT_UI_H

#include "Logout.h"
#include <fstream>

class LogoutUI {
    private: 
        Logout* logout;
    public: 
        LogoutUI(Logout* logout);
        void showInterface(std::ofstream& out_fp);
        void logoutRequest(std::ofstream& out_fp);
};

#endif