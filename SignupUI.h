#ifndef SIGNUP_UI_H
#define SIGNUP_UI_H

#include "Signup.h"
#include <fstream>

class SignupUI {
private:
    Signup* signup;

public:
    SignupUI(Signup* signup);
    void showInterface(std::ofstream& out_fp);
    void inputSignupInfo(std::ifstream& in_fp, std::ofstream& out_fp);
};

#endif