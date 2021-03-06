#include "company.hpp"

#include <iostream>

#include "customer.hpp"

Company::Company() {}
Company::Company(std::string name, std::string address, char type,
                 std::string vat, int64_t volumeDiscount)
    : Customer(name, address, type), vat(vat), volumeDiscount(volumeDiscount) {}

Company::~Company() {
#ifdef PRINT_DESTRUCTORS
  std::cout << "Company::~Company()" << std::endl;
#endif
}

std::string Company::getVAT(void) const { return this->vat; }

void Company::setVAT(std::string vat) { this->vat = vat; }

int64_t Company::getVolumeDiscount(void) const { return this->volumeDiscount; }

void Company::setVolumeDiscount(int64_t volumeDiscount) {
  this->volumeDiscount = volumeDiscount;
}

void Company::show(void) const {
  std::cout << "=== Company ===" << std::endl
            << "\tName: " << this->name << std::endl
            << "\tAddress: " << this->address << std::endl
            << "\tVAT: " << this->vat << std::endl
            << "\tVolume Discount: " << this->volumeDiscount << std::endl
            << "\tType: " << this->type << std::endl;
}
