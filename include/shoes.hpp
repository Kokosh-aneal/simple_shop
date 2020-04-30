#ifndef __SHOES__H__
#define __SHOES__H__

#include "../include/product.hpp"

class Shoes :public Product{
    private:
        int size;
    public:
        Shoes(const std::string="*brand*", float=4, const std::string="*material*", const int = 42);
        void display() const override;
};

#endif //__SHOES__H__