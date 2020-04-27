#ifndef __PRODUCT__H__
#define __PRODUCT__H__

#include <string>

class Product{
    private:
        std::string brand;
        float price;
        std::string material;
    public:
        Product();
        void dodaj();
        void usun();
        void price_change();
};

#endif 