#include "LogoutUI.h"

LogoutUI::LogoutUI(Logout* logout)
    : logout(logout) {}

void LogoutUI::showInterface(std::ofstream& out_fp) {
    out_fp << "2.2. 로그아웃\n";
}

void LogoutUI::logoutRequest(std::ofstream& out_fp) {
    auto result = logout->logout();
    out_fp << "> " << result << "\n\n";
}