#include "LoginUI.h"

LoginUI::LoginUI(Login* login) 
    : login(login) {}

void LoginUI::showInterface(std::ofstream& out_fp) {
    out_fp << "2.1. 로그인\n";
}

void LoginUI::inputLoginInfo(std::ifstream& in_fp, std::ofstream& out_fp) {
    std::string id, password;
    in_fp >> id >> password;

    auto result = login->login(id, password);

    out_fp << std::get<0>(result) << " "
           << std::get<1>(result) << std::endl;
}