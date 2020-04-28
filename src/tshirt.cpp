#include <iostream>
#include <string>
#include "../include/tshirt.hpp"

Tshirt::Tshirt(const std::string brand_con, float price_con, const std::string material_con, char size_con):
Product(brand_con, price_con, material_con), size(size_con)
{

}