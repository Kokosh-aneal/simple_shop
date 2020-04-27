#ifndef __TSHIRT__H__
#define __TSHIRT__H__

#include "../include/product.hpp"

class Tshirt :public Product{
    private:
        char size;
    public:
        Tshirt(const std::string="*brand*", float=4, const std::string="*material*", char=77);
};

#endif //__TSHIRT__H__