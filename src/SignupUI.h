#ifndef SIGNUP_UI_H
#define SIGNUP_UI_H

#include "Signup.h"
#include <fstream>

// 회원가입을 위한 UI 클래스
class SignupUI {
private:
    Signup* signup;

public:
    SignupUI(Signup* signup); // 생성자
    void showInterface(std::ofstream& out_fp); // 메뉴 헤더 인터페이스 출력
    void inputSignupInfo(std::ifstream& in_fp, std::ofstream& out_fp); // 회원가입 결과 출력
};

#endif