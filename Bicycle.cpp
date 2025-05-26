#include "Bicycle.h"

Bicycle::Bicycle(std::string bid, std::string brandName) 
    : id(bid), brand(brandName), rentalStatus(false) {}

std::string Bicycle::getId() {
    return id;
}

std::string Bicycle::getBrand() {
    return brand;
}

void Bicycle::setRentalStatus(bool status) {
    rentalStatus = status;
}

std::tuple<std::string, std::string> Bicycle::getBicycleDetails() const{
    return std::make_tuple(id, brand);
}

bool Bicycle::getRentalStatus() const {
    return rentalStatus;
}