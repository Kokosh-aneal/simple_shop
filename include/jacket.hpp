#ifndef __JACKET__H__
#define __JACKET__H__

#include "../include/product.hpp"

class Jacket :public Product{
    private:
        int num_of_pockets;
    public:
        Jacket(const std::string="*brand*", float=4, const std::string="*material*", const int = 2);
        void display() const override;
};

#endif //__JACKET__H__