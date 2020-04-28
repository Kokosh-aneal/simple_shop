#include "../include/menu.hpp"
#include <iostream>
#include "../include/shop.hpp"

Menu::Menu(Shop* sklep_con): sklep(sklep_con){
}

void Menu::show(){
    while(opcja!=0){
        //Proste UI
        std::cout << std:: endl << "Witaj w programie zarzadzajacym sklepem!" << std::endl;
        std::cout << "0. Wyjsc z programu" << std::endl;
        std::cout << "1. Dodaj produkt do magazynu" << std::endl;
        std::cout << "2. Usuń produkt z magazynu" << std::endl;
        std::cout << "3. Zmien cene produktu" << std::endl;
        std::cout << "4. Zloz zamowienie na nowe produkty" << std::endl;
        std::cout << "5. Wyswietl stan magazynu" << std::endl;
        std::cout << "Wybierz opcje:";
        std::cin >> opcja;
        //Instrukcja switch-case obslugujaca menu
        switch(opcja){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 0:
                std::cout << std::endl << "Konczenie pracy programu..." << std::endl;
                exit(1);
            default:
                std::cout << std::endl << "Nie ma takiej opcji, sprobuj jeszcze raz." << std::endl;
                break;
        }
    }
}