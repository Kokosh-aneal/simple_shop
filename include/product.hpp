#ifndef __PRODUCT__H__
#define __PRODUCT__H__

#include <string>

class Product{
    public:
        std::string brand;
        float price;
        std::string material;
        //int id;
        Product(std::string="*product*", float = 5.99, std::string="*material*");
        ~Product();
        virtual void display() const = 0;
};

#endif 