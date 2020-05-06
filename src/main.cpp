#include "../include/menu.hpp"
//Autor: Jakub Kokoszka
#include "../include/shop.hpp"
#include <iostream>

int main(){
    Shop sklep;
    Menu menu(&sklep);
    menu.show();
    return 0;
}