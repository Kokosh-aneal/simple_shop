#ifndef __SHOP__H__
#define __SHOP__H__

#include "../include/product.hpp"
#include <string>
#include <vector>

class Shop{
    private:
        std::string name;
        std::vector<Product*> store;
    public:
        Shop();
        ~Shop();
        void adding(Product*);
        void removing();
        void ordering();
        void display_store();
};

#endif //__SHOP__H__