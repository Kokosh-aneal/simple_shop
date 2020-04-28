#include <iostream>
#include <string>
#include "../include/underwear.hpp"

Underwear::Underwear(const std::string brand_con, float price_con, const std::string material_con, std::string shape_con):
Product(brand_con, price_con, material_con), shape(shape_con)
{

}