#ifndef LOGIN_UI_H
#define LOGIN_UI_H

#include "Login.h"
#include <fstream>
#include <tuple>
#include <string>

class LoginUI {
    private:
        Login* login;
    public: 
        LoginUI(Login* login);
        void showInterface(std::ofstream& out_fp);
        void inputLoginInfo(std::ifstream& in_fp, std::ofstream& out_fp);
};  

#endif