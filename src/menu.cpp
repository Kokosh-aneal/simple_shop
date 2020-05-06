//Autor: Jakub Kokoszka
#include "../include/menu.hpp"
#include "../include/shop.hpp"
#include "../include/product.hpp"
#include "../include/jacket.hpp"
#include "../include/shoes.hpp"
#include "../include/tshirt.hpp"
#include "../include/underwear.hpp"
#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>

//Konstruktor klasy Menu
Menu::Menu(Shop* sklep_con): sklep(sklep_con){
}

//Glowna funkcja wyswietlajaca UI oraz obslugujaca program
void Menu::show(){
    system("clear");
    std::cout << "Czy wczytac magazyn z pliku 'magazyn.txt'(t/n):";
    std::cin >> choice;
    system("clear");
    if(choice==116){
        read_from_file();
    }
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
                order();
                system("clear");
                break;
            //Wyswietlanie stanu magazynu
            case 5:
                display_store();
                break;
            //Zapis do pliku
            case 6:
                save_to_file();
                break;
            //Odczyt z pliku
            case 7:
                read_from_file();
                break;
            //Konczenie pracy programu
            case 0:
                std::cout << "Czy zapisac sklep przed wyjsciem z programu (t/n):";
                std::cin >> choice_end;
                if(choice_end==116) save_to_file();
                system("clear");
                std::cout << std::endl << "Konczenie pracy programu...\n" << std::endl;
                exit(1);
            //Bledna opcja wybrana przez uzytkownika
            default:
                std::cout << std::endl << "Nie ma takiej opcji, sprobuj jeszcze raz." << std::endl;
                break;
        }
    }
}

//Funkcja zapisujaca do pliku
void Menu::save_to_file(){
    if(sklep->store.size()>0){
        std::cout << "1. na koniec pliku\n";
        std::cout << "2. wyczyscic plik i zapisac\n";
        std::cout <<"Wybierz opcje: ";
        std::cin >> opcja;
        switch(opcja){
            case 1:
                for(int i=0; i<sklep->store.size(); i++){
                    this->sklep->store[i]->save_record();
                }
                break;
            case 2:
                std::fstream zapis;
                zapis.open("magazyn.txt", std::fstream::out);
                zapis.close();
                for(int i=0; i<sklep->store.size(); i++){
                    this->sklep->store[i]->save_record();
                }
                break;

        }
    }
    else{
        std::cout << "Wprowadz rekordy do bazy danych!\n";
    }
}

//Funkcja wczytajaca "baze danych" z pliku
void Menu::read_from_file(){
    std::fstream odczyt;
    odczyt.open("magazyn.txt", std::fstream::in);
    if(odczyt.good()){
        while(getline(odczyt, linia)){
            std::stringstream ss(linia);
            getline(ss, this->id_str,';');
            this->id_temp = stoi(id_str);
            getline(ss, this->brand_temp,';');
            getline(ss, this->price_str, ';');
            this->price_temp = stoi(price_str);
            getline(ss, this->material_temp, ';');
            switch(this->id_temp){
                //Kurtka
                case 1:
                    getline(ss, this->pockets_str,';');
                    this->pockets_temp = stoi(pockets_str);
                    sklep->adding(new Jacket(brand_temp,price_temp,material_temp,pockets_temp));
                    break;
                //Buty
                case 2:
                    getline(ss, this->size_str,';');
                    this->size_temp1 = stoi(size_str);
                    sklep->adding(new Shoes(brand_temp, price_temp, material_temp, size_temp1));
                    break;
                //Koszulka
                case 3:
                    getline(ss, this->size_str,';');
                    this->size_temp2 = size_str[0];
                    sklep->adding(new Tshirt(brand_temp, price_temp, material_temp, size_temp2));
                    break;
                //Bielizna
                case 4:
                    getline(ss, this->shape_temp,';');
                    sklep->adding(new Underwear(brand_temp, price_temp, material_temp, shape_temp));
                    break;
            }
        }
    }
    else{
        std::cout << "Blad podczas otwierania pliku.\n";
    }
    odczyt.close();
}

//Funkcja wyswietlajaca zawartosc magazynu
void Menu::display_store(){
    if(sklep->store.size()>0){
        std::cout << "typ:  kurtka = 1, buty = 2, koszulka = 3, bielizna = 4";
        std::cout << "\nCecha: kurtka = ilosc kieszeni, buty = rozmiar, koszulka = rozmiar, bielizna = rodzaj\n";
        std::cout << "\nLp. ; typ ; marka ; cena ; material ; cecha\n";
        for(int i=0; i<sklep->store.size(); i++){
            std::cout << i << ". ";
            this->sklep->display(i);
        }
    }
    else{
        std::cout << "Wprowadz jakis rekord." << std::endl;
    }
}

//Funkcja zmieniajaca cene wybranego produktu
void Menu::change_price(){
    if(sklep->store.size()>0){
        for(int i=0; i<sklep->store.size(); i++){
            std::cout << i << ".";
            this->sklep->display(i);
        }
        std::cout << "\nPodaj ID produktu, ktorego cene chcesz zmienic: ";
        std::cin >> id;
        std::cout << "\nPodaj nowa cene: ";
        std::cin >> price_temp;
        sklep->store[id]->price = price_temp;  
    }
    else    std::cout << "Wprowadz jakis rekord." << std::endl;

}

//Funkcja obslugujaca skladanie zamowien
void Menu::order(){
    while(opcja_order!=2){
        system("clear");
        std::cout << "1. Dodac produkt do zamowienia\n";
        std::cout << "2. Zakonczyc skladanie zamowienia\n";
        std::cout << "Wybierz opcje: ";
        std::cin >> opcja_order;
        if(opcja_order==1)  adding_to_store();
    }
}

//Funkcja usuwajaca z magazynu
void Menu::remove_from_store(){
    display_store();
    if(sklep->store.size()>0){
        std::cout << "\nPodaj indeks elementu, ktory chcesz usunac: ";
        std::cin >> id;
        sklep->store.erase(sklep->store.begin()+id);
    }
    else    std::cout << "Wprowadz jakis rekord!\n";
}

//Funkcja dodajaca przedmiot do magazynu
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
            std::cout << "Ilosc kieszeni[int]: ";    std::cin >> pockets_temp;
            sklep->adding(new Jacket(brand_temp, price_temp, material_temp, pockets_temp));
            break;
        case 2:
            std::cout << "Rozmiar buta[int]: ";    std::cin >> size_temp1;
            sklep->adding(new Shoes(brand_temp, price_temp, material_temp, size_temp1));
            break;
        case 3:
            std::cout << "Rozmiar koszulki (S/M/L)[char]: ";    std::cin >> size_temp2;
            sklep->adding(new Tshirt(brand_temp, price_temp, material_temp, size_temp2));
            break;
        case 4:
            std::cout << "Rodzaj bielizny[string]: ";    std::cin >> shape_temp;
            sklep->adding(new Underwear(brand_temp, price_temp, material_temp, shape_temp));
            break;
        default:
            std::cout << "Wybierz produkt z listy.\n";
            break;
    }
}