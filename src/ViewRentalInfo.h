#ifndef VIEW_RENTAL_INFO_H
#define VIEW_RENTAL_INFO_H

#include "UserCollection.h"
#include <vector>

// 자전거 대여 정보 조회를 위한 Control 클래스
class ViewRentalInfo {
    private:
        UserCollection* userCollection; 
    public: 
        ViewRentalInfo(UserCollection* UserCollection); // 생성자
        std::vector<Bicycle*> viewRentalInfo(); // 대여 자전거 리스트를 반환
    
};

#endif