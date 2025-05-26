#ifndef EXIT_UI_H
#define EXIT_UI_H

#include <string>
#include "Exit.h"
#include <fstream>

class ExitUI {
private:
    Exit exit; 
public:
    ExitUI();
    void exitProgram(std::ofstream& out_fp); 
};

#endif