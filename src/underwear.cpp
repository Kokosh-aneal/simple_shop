//Autor: Jakub Kokoszka
#include <iostream>
#include <string>
#include "../include/underwear.hpp"

Underwear::Underwear(const std::string brand_con, float price_con, const std::string material_con, std::string shape_con):
Product(brand_con, price_con, material_con), shape(shape_con){
    this->type_id = 4;
}



void Underwear::display() const{
    std::cout << this->type_id << ";" << brand << ";" << price << ";" << material << ";" << shape << "\n";
}

void Underwear::save_record() const{
    std::fstream zapis;
    zapis.open("magazyn.txt", std::fstream::out | std::fstream::app);
    if(zapis.good()){
       zapis << this->type_id << ";" << this->brand << ";" << this->price << ";" << this->material << ";" << this->shape << "\n";
    }
    else{
        std::cout << "Blad podczas otwierania pliku.\n";
    }
    zapis.close();
}