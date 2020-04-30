#ifndef __UNDERWEAR__H__
#define __UNDERWEAR__H__

#include "../include/product.hpp"
#include <string>

class Underwear :public Product{
    private:
        std::string shape;
    public:
        Underwear(const std::string="*brand*", float=4, const std::string="*material*", std::string="*shape*");
        void display() const override;
};

#endif //__UNDERWEAR__H__