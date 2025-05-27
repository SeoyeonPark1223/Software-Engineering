#ifndef LOGIN_UI_H
#define LOGIN_UI_H

#include "Login.h"
#include <fstream>
#include <tuple>
#include <string>

// 로그인을 위한 UI 클래스
class LoginUI {
    private:
        Login* login;
    public: 
        LoginUI(Login* login); // 생성자
        void showInterface(std::ofstream& out_fp); // 메뉴 헤더 인터페이스를 출력
        void inputLoginInfo(std::ifstream& in_fp, std::ofstream& out_fp); // 로그인 결과 출력
};  

#endif