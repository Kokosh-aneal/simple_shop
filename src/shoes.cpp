#include <iostream>
#include <string>
#include "../include/shoes.hpp"

Shoes::Shoes(const std::string brand_con, float price_con, const std::string material_con, const int size_con):
Product(brand_con, price_con, material_con), size(size_con)
{

}
void Shoes::display() const{
    std::cout << "Buty: " << brand << " " << price << " " << material << " " << size << "\n";
}