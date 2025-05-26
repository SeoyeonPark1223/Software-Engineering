#include "SignupUI.h"
#include "User.h"

SignupUI::SignupUI(Signup* signup): signup(signup) {}

void SignupUI::showInterface(std::ofstream& out_fp) {
    out_fp << "1.1. 회원가입\n";
}

void SignupUI::inputSignupInfo(std::ifstream& in_fp, std::ofstream& out_fp) {
    std::string id, password, phoneNumber;
    in_fp >> id >> password >> phoneNumber;

    auto result = signup->signup(id, password, phoneNumber);

    out_fp << std::get<0>(result) << " "
           << std::get<1>(result) << " "
           << std::get<2>(result) << std::endl;
}
