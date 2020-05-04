#include "../include/menu.hpp"
#include <iostream>
#include "../include/shop.hpp"
#include "../include/product.hpp"
#include "../include/jacket.hpp"
#include "../include/shoes.hpp"
#include "../include/tshirt.hpp"
#include "../include/underwear.hpp"
#include <vector>
#include <fstream>


Menu::Menu(Shop* sklep_con): sklep(sklep_con){
}

void Menu::show(){
    system("clear");
    while(opcja!=0){
        //Proste UI
        std::cout << std:: endl << "Witaj w programie zarzadzajacym sklepem!" << std::endl;
        std::cout << "0. Wyjsc z programu" << std::endl;
        std::cout << "1. Dodaj produkt do magazynu" << std::endl;
        std::cout << "2. Usuń produkt z magazynu" << std::endl;
        std::cout << "3. Zmien cene produktu" << std::endl;
        std::cout << "4. Zloz zamowienie na nowe produkty" << std::endl;
        std::cout << "5. Wyswietl stan magazynu" << std::endl;
        std::cout << "6. Zapis magazynu do pliku" << std::endl;
        std::cout << "7. Wczytanie magazynu z pliku" << std::endl;
        std::cout << "Wybierz opcje:";
        std::cin >> opcja;
        system("clear");
        //Instrukcja switch-case obslugujaca menu
        switch(opcja){
            //Dodawanie do magazynu
            case 1:
                adding_to_store(); 
                system("clear");
                break;
            //Usuwanie z magazynu
            case 2:
                remove_from_store();
                system("clear");
                break;
            //Zmiana ceny produktu
            case 3:
                change_price();
                system("clear");
                break;
            //Skladanie zamowienia na nowe produkty
            case 4:
                break;
            //Wyswietlanie stanu magazynu
            case 5:
                display_store();
                break;
            case 6:
                save_to_file();
                break;
            case 7:
                read_from_file();
                break;
            case 0:
                std::cout << std::endl << "Konczenie pracy programu...\n" << std::endl;
                exit(1);
            default:
                std::cout << std::endl << "Nie ma takiej opcji, sprobuj jeszcze raz." << std::endl;
                break;
        }
    }
}

void Menu::save_to_file(){
    if(sklep->store.size()>0){
        std::ofstream zapis;
        file_name = "magazyn.txt";
        zapis.open(file_name);
        //for(int i=0; i<sklep->store.size(); i++){
        //    zapis << this->sklep->display(i);
        //}
        zapis << "test";
        
    }
    else{
        std::cout << "Wprowadz rekordy do bazy danych!\n";
    }
}

void Menu::display_store(){
    if(sklep->store.size()>0){
        for(int i=0; i<sklep->store.size(); i++){
            std::cout << i << ".";
            this->sklep->display(i);
        }
    }
    else{
        std::cout << "Wprowadz jakis rekord." << std::endl;
    }
}

void Menu::change_price(){
    if(sklep->store.size()>0){
        for(int i=0; i<sklep->store.size(); i++){
            std::cout << i << ".";
            this->sklep->display(i);
        }
        std::cout << "\nPodaj ID produktu, ktorego cene chcesz zmienic: ";
        std::cin >> id;
        std::cout << "\nPodaj cene: ";
        std::cin >> price_temp;
        sklep->store[id]->price = price_temp;  
    }
    else    std::cout << "Wprowadz jakis rekord." << std::endl;

}

void Menu::remove_from_store(){
    display_store();
    std::cout << "\nPodaj indeks elementu, ktory chcesz usunac: ";
    std::cin >> id;
    sklep->store.erase(sklep->store.begin()+id);
}

void Menu::adding_to_store(){
    //Wybor produktu, ktory uzytkownik chce dodac do magazynu
    std::cout << "\n1. Kurtka\n";
    std::cout << "2. Buty\n";
    std::cout << "3. Koszulka\n";
    std::cout << "4. Bielizna\n";
    std::cout << "\nWybierz produkt, ktory chcesz dodac: ";
    std::cin >> opcja_add;
    std::cout << "\nMarka: ";    std::cin >> brand_temp;
    std::cout << "Cena: ";     std::cin >> price_temp;
    std::cout << "Material: "; std::cin >> material_temp;  
    switch(opcja_add){
        case 1:
            std::cout << "Ilosc kieszeni: ";    std::cin >> pockets_temp;
            sklep->adding(new Jacket(brand_temp, price_temp, material_temp, pockets_temp));
            break;
        case 2:
            std::cout << "Rozmiar buta: ";    std::cin >> size_temp1;
            sklep->adding(new Shoes(brand_temp, price_temp, material_temp, size_temp1));
            break;
        case 3:
            std::cout << "Rozmiar koszulki (S,M,...): ";    std::cin >> size_temp2;
            sklep->adding(new Tshirt(brand_temp, price_temp, material_temp, size_temp2));
            break;
        case 4:
            std::cout << "Rodzaj bielizny: ";    std::cin >> shape_temp;
            sklep->adding(new Underwear(brand_temp, price_temp, material_temp, shape_temp));
            break;
        default:
            std::cout << "Wybierz produkt z listy.\n";
            break;
    }
}