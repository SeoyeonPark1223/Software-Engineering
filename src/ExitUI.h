#ifndef EXIT_UI_H
#define EXIT_UI_H

#include <string>
#include "Exit.h"
#include <fstream>

// 시스템 종료를 위한 UI 클래스
class ExitUI {
private:
    Exit exit; 
public:
    ExitUI(); // 생성자
    void exitProgram(std::ofstream& out_fp); // 메뉴 헤더 인터페이스 출력
};

#endif