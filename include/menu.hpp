#ifndef __MENU__H__
#define __MENU__H__

#include <iostream>
#include "../include/shop.hpp"

class Menu{
    private:
        int opcja;
        Shop* sklep;

    public:
        Menu(Shop*);
        //~Menu();
        void show();
};

#endif  //__MENU__H__