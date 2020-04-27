#include "../include/menu.hpp"
#include <iostream>

void Menu::show(){
    std::cout << "Witaj w programie zarzadzajacym sklepem!" << std::endl;
    std::cout << "1. Dodaj produkt do magazynu" << std::endl;
    std::cout << "2. Usuń produkt z magazynu" << std::endl;
    std::cout << "3. Zmien cene produktu" << std::endl;
    std::cout << "4. Zloz zamowienie na nowe produkty" << std::endl;
    std::cout << "Wybierz opcje:";
    std::cin >> opcja;
}