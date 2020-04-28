#include <iostream>
#include <string>
#include "../include/jacket.hpp"

Jacket::Jacket(const std::string brand_con, float price_con, const std::string material_con, const int num_of_pockets_con):
Product(brand_con, price_con, material_con), num_of_pockets(num_of_pockets_con)
{

}