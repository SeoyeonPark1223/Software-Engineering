#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>

class Bicycle {
    private:
        std::string id;
        std::string brand;
        bool rentalStatus;
    public:     
        Bicycle(std::string id, std::string brand);

        std::string getId();
        std::string getBrand();
        void setRentalStatus(bool status);
        std::tuple<std::string, std::string> getBicycleDetails() const;
        bool getRentalStatus() const;
};

#endif