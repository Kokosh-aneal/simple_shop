#ifndef __PRODUCT__H__
#define __PRODUCT__H__

#include <string>

class Product{
    private:
        std::string brand;
        float price;
        std::string material;
    public:
        Product(std::string="*product*", const float = 5.99, std::string="*material*");
};

#endif 