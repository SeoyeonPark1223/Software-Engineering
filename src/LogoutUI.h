#ifndef LOGOUT_UI_H
#define LOGOUT_UI_H

#include "Logout.h"
#include <fstream>

// 로그아웃을 위한 UI 클래스
class LogoutUI {
    private: 
        Logout* logout;
    public: 
        LogoutUI(Logout* logout); // 생성자
        void showInterface(std::ofstream& out_fp); // 메뉴 헤더 인터페이스를 출력
        void logoutRequest(std::ofstream& out_fp); // 로그아웃 결과 출력
};

#endif