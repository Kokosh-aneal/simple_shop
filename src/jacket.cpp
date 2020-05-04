#include <iostream>
#include <string>
#include "../include/jacket.hpp"
#include <fstream>

Jacket::Jacket(const std::string brand_con, float price_con, const std::string material_con, const int num_of_pockets_con):
Product(brand_con, price_con, material_con), num_of_pockets(num_of_pockets_con)
{
    this->type_id = 1;
}

void Jacket::display() const{
    std::cout << this->type_id << ";" << this->brand << ";" << this->price << ";" << this->material << ";" << this->num_of_pockets << "\n";
}

void Jacket::save_record() const{
    std::fstream zapis;
    zapis.open("magazyn.txt", std::fstream::out | std::fstream::app);
    if(zapis.good()){
       zapis << this->type_id << ";" << this->brand << ";" << this->price << ";" << this->material << ";" << this->num_of_pockets << "\n";
    }
    else{
        std::cout << "Blad podczas otwierania pliku.\n";
    }
    zapis.close();
}