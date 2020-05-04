#ifndef __PRODUCT__H__
#define __PRODUCT__H__

#include <string>
#include <fstream>

class Product{
    public:
        std::string brand;
        float price;
        std::string material;
        int type_id;
        //int id;
            Product(std::string="*product*", float = 5.99, std::string="*material*");
        ~Product();
        virtual void display() const = 0;
        virtual void save_record() const = 0;
        virtual void read_record() const = 0;
};

#endif 