#include "ExitUI.h"

ExitUI::ExitUI() : exit() {}

void ExitUI::exitProgram(std::ofstream& out_fp) {
    if(exit.exit() == true) {
        out_fp << "6.1. 종료\n";
    }
}