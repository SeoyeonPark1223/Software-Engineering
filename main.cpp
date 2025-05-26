#include <stdio.h>
#include <fstream>
#include <string>

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

#include "SignupUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "RegisterBicycleUI.h"
#include "RentalBicycleUI.h"
#include "ViewRentalInfoUI.h"
#include "ExitUI.h"

#include "Signup.h"
#include "Login.h"
#include "Logout.h"
#include "RegisterBicycle.h"
#include "RentalBicycle.h"
#include "ViewRentalInfo.h"
#include "Exit.h"

#include "Bicycle.h"
#include "BicycleCollection.h"
#include "User.h"
#include "UserCollection.h"

void doTask(std::ifstream& in_fp, std::ofstream& out_fp);

int main() {
    std::ifstream in_fp;
    std::ofstream out_fp;
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    doTask(in_fp, out_fp);

    out_fp.close();
    in_fp.close();
    return (0);
}

void doTask(std::ifstream& in_fp, std::ofstream& out_fp) {
    int menu_level_1 = 0, menu_level_2 = 0, is_program_exit = 0;
    UserCollection userCollection;
    BicycleCollection bicycleCollection;

    while (!is_program_exit) {
        in_fp >> menu_level_1 >> menu_level_2;

        switch(menu_level_1) {
            case 1:
                switch(menu_level_2) {
                    case 1: {// 1.1. 회원가입 > [ID] [비밀번호] [전화번호]
                        Signup signup(&userCollection);
                        SignupUI signupUI(&signup);
                        signupUI.showInterface(out_fp);
                        signupUI.inputSignupInfo(in_fp, out_fp);
                        break;
                    }
                } break;

            case 2:
                switch(menu_level_2) {
                    case 1: { // 2.1. 로그인 > [ID] [PW]
                        Login login(&userCollection);
                        LoginUI loginUI(&login);
                        loginUI.showInterface(out_fp);
                        loginUI.inputLoginInfo(in_fp, out_fp);
                        break ;
                    }
                    case 2: { // 2.2. 로그아웃 > [ID]
                        Logout logout(&userCollection);
                        LogoutUI logoutUI(&logout);
                        logoutUI.showInterface(out_fp);
                        logoutUI.logoutRequest(out_fp);
                        break;
                    }
                } break;

            case 3:
                switch(menu_level_2) {
                    case 1:  { // 3.1. 자전거 등록 > [ID] [name]
                        RegisterBicycle registerBicycle(&bicycleCollection, &userCollection);
                        RegisterBicycleUI registerBicycleUI(&registerBicycle);
                        registerBicycleUI.showInterface(out_fp);
                        registerBicycleUI.inputBicycleInfo(in_fp, out_fp);
                        break;
                    }
                } break;
            
            case 4:
                switch(menu_level_2) {
                    case 1: { // 4.1. 자전거 대여 > [ID]
                        RentalBicycle rentalBicycle(&bicycleCollection, &userCollection);
                        RentalBicycleUI rentalBicycleUI(&rentalBicycle);
                        rentalBicycleUI.showInterface(out_fp);
                        rentalBicycleUI.rentalBicycleRequest(in_fp, out_fp);
                        break;
                    }
                } break;

            case 5:
                switch(menu_level_2) {
                    case 1: { // 5.1. 자전거 대여 리스트 {> [ID] [name]}*
                        ViewRentalInfo viewRentalInfo(&userCollection);
                        ViewRentalInfoUI viewRentalInfoUI(&viewRentalInfo);
                        viewRentalInfoUI.showInterface(out_fp);
                        viewRentalInfoUI.viewRentalInfoRequest(out_fp);
                        break;
                    }
                } break;

            case 6:
                switch(menu_level_2) {
                    case 1: { // 6.1. 종료
                        ExitUI exitUI;
                        exitUI.exitProgram(out_fp);
                        break; 
                    }
                }
        }
    }
}