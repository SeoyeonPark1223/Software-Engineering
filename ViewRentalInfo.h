#ifndef VIEW_RENTAL_INFO_H
#define VIEW_RENTAL_INFO_H

#include "UserCollection.h"
#include <vector>

class ViewRentalInfo {
    private:
        UserCollection* userCollection; 
    public: 
        ViewRentalInfo(UserCollection* UserCollection);
        std::vector<Bicycle*> viewRentalInfo();
    
};

#endif