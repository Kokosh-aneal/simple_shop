//Autor: Jakub Kokoszka
#include <iostream>
#include <string>
#include "../include/tshirt.hpp"

Tshirt::Tshirt(const std::string brand_con, float price_con, const std::string material_con, char size_con):
Product(brand_con, price_con, material_con), size(size_con)
{
    this->type_id = 3;
}

void Tshirt::display() const{
    std::cout << this->type_id << ";" << brand << ";" << price << ";" << material << ";" << size << "\n";
}

void Tshirt::save_record() const{
    std::fstream zapis;
    zapis.open("magazyn.txt", std::fstream::out | std::fstream::app);
    if(zapis.good()){
       zapis << this->type_id << ";" << this->brand << ";" << this->price << ";" << this->material << ";" << this->size << "\n";
    }
    else{
        std::cout << "Blad podczas otwierania pliku.\n";
    }
    zapis.close();
}