#include "LogoutUI.h"

// 생성자: logout 포인터 저장
LogoutUI::LogoutUI(Logout* logout)
    : logout(logout) {}

// 메뉴 헤더 인터페이스를 출력
void LogoutUI::showInterface(std::ofstream& out_fp) {
    out_fp << "2.2. 로그아웃\n";
}

// 로그아웃 결과로 유저의 id 출력
void LogoutUI::logoutRequest(std::ofstream& out_fp) {
    auto result = logout->logout();
    out_fp << "> " << result << "\n\n";
}