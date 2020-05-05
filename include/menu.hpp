#ifndef __MENU__H__
#define __MENU__H__

#include <iostream>
#include "../include/shop.hpp"

class Menu{
    private:
        int opcja;
        int opcja_add;
        int id;
        Shop *sklep;
        std::string brand_temp;
        float price_temp;
        std::string material_temp;
        int pockets_temp;
        int size_temp1;
        char size_temp2;
        std::string shape_temp;
        int id_temp;
        std::string linia;
        std::string id_str;
        std::string price_str;
        std::string pockets_str;
        std::string size_str;
    public:
        Menu(Shop*);
        //~Menu();
        void show();
        void adding_to_store();
        void remove_from_store();
        void change_price();
        void display_store();
        void save_to_file();
        void read_from_file();
};

#endif  //__MENU__H__