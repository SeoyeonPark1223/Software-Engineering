#include "SignupUI.h"
#include "User.h"

// 생성자: signup 포인터를 저장
SignupUI::SignupUI(Signup* signup)
    : signup(signup) {}

// 메뉴 헤더 인터페이스 출력
void SignupUI::showInterface(std::ofstream& out_fp) {
    out_fp << "1.1. 회원가입\n";
}

// signup control로 회원가입 처리 후 id와 password값으로 결과 출력
void SignupUI::inputSignupInfo(std::ifstream& in_fp, std::ofstream& out_fp) {
    std::string id, password, phoneNumber;
    in_fp >> id >> password >> phoneNumber;

    auto result = signup->signup(id, password, phoneNumber);

    out_fp << "> " << std::get<0>(result) << " "
           << std::get<1>(result) << " "
           << std::get<2>(result) << "\n\n";
}
