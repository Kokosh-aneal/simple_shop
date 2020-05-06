//Autor: Jakub Kokoszka
#include <iostream>
#include <string>
#include "../include/product.hpp"

Product::Product(std::string brand_con, float price_con, std::string material_con):brand(brand_con), price(price_con), material(material_con)
{

}

Product::~Product(){
    std::cout << "Product destructor" << std::endl;
}