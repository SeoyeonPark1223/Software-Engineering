#ifndef USER_H
#define USER_H

#include "Bicycle.h"
#include <vector>
#include <string>

enum class RoleType {
    ADMIN, 
    MEMBER
};

class Bicycle;

// 유저를 위한 Entity 클래스
class User {
    private:
        std::string id;
        std::string password;
        RoleType role;
        std::string phoneNumber;
        bool loginStatus;
        std::vector<Bicycle*> rentalBicycleList;
    public: 
        User(std::string id, std::string password, RoleType role, std::string phoneNumber); // MEMBER 생성자
        User(std::string id, std::string password, RoleType role); // ADMIN 생성자

        std::string getId() const; // 유저의 id를 반환
        RoleType getRoleType() const; // 유저의 Role을 반환
        bool checkIdAndPassword(std::string id, std::string password) const; // 받은 id와 password를 가지고 있는 유저 객체의 값과 비교하여 일치 여부 반환
        void setLoginStatus(bool status); // 유저의 로그인 상태 지정
        void addRentalBicycleList(Bicycle* bicycle); // 받은 bicycle을 유저의 rentalBicycleList에 추가
        std::vector<Bicycle*> getRentalBicycleList() const; // rentalBicycleList를 조회
};

#endif