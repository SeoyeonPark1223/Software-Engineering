#include "LoginUI.h"

// 생성자: login 포인터 저장
LoginUI::LoginUI(Login* login) 
    : login(login) {}

// 메뉴 헤더 인터페이스를 출력
void LoginUI::showInterface(std::ofstream& out_fp) {
    out_fp << "2.1. 로그인\n";
}

// 로그인 결과로 id와 password값 출력 
void LoginUI::inputLoginInfo(std::ifstream& in_fp, std::ofstream& out_fp) {
    std::string id, password;
    in_fp >> id >> password;

    auto result = login->login(id, password);

    out_fp << "> " << std::get<0>(result) << " "
           << std::get<1>(result) << "\n\n";
}