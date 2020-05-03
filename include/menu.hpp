#ifndef __MENU__H__
#define __MENU__H__

#include <iostream>
#include "../include/shop.hpp"

class Menu{
    private:
        int opcja;
        int opcja_add;
        Shop *sklep;
        std::string brand_temp;
        float price_temp;
        std::string material_temp;
        int pockets_temp;
        int size_temp1;
        char size_temp2;
        std::string shape_temp;
    public:
        Menu(Shop*);
        //~Menu();
        void show();
};

#endif  //__MENU__H__