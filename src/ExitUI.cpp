#include "ExitUI.h"

// 생성자
ExitUI::ExitUI() : exit() {}

// 메뉴 헤더 인터페이스 출력
void ExitUI::exitProgram(std::ofstream& out_fp) {
    if(exit.exit() == true) {
        out_fp << "6.1. 종료";
    }
}