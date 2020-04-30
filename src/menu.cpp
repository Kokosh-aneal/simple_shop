#include "../include/menu.hpp"
#include <iostream>
#include "../include/shop.hpp"
#include "../include/product.hpp"
#include "../include/jacket.hpp"

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
            //Dodawanie do magazynu
            case 1:
                //Wybor produktu, ktory uzytkownik chce dodac do magazynu
                std::cout << "1. Kurtka\n";
                std::cout << "2. Buty\n";
                std::cout << "3. Koszulka\n";
                std::cout << "4. Bielizna\n";
                std::cout << "\nWybierz produkt, ktory chcesz dodac: ";
                std::cin >> opcja_add;
                std::cout << "Marka: ";    std::cin >> brand_temp;
                std::cout << "Cena: ";     std::cin >> price_temp;
                std::cout << "Material: "; std::cin >> material_temp;  
                switch(opcja_add){
                    case 1:
                        std::cout << "Ilosc kieszeni: ";    std::cin >> pockets_temp;
                        Jacket kurtka(brand_temp, price_temp, material_temp, pockets_temp);
                        sklep->adding(&kurtka);
                        break;
                    //case 2:
                    //    break;
                    //case 3:
                    //    break;
                    //case 4:
                    //    break;
                    //default:
                    //    std::cout << "Wybierz produkt z listy.\n";
                    //    break;
                }
                //sklep.add();
                break;
            //Usuwanie z magazynu
            case 2:
                break;
            //Zmiana ceny produktu
            case 3:
                break;
            //Skladanie zamowienia na nowe produkty
            case 4:
                break;
            //Wyswietlanie stanu magazynu
            case 5:
                sklep->display_store();
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