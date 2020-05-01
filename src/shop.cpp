#include <iostream>
#include "../include/shop.hpp"
#include <vector>

Shop::Shop(){

}

Shop::~Shop(){

}

void Shop::adding(Product* produkt){
   this->store.push_back(produkt);
}

//void Shop::removing(){
//
//}

//void Shop::order(){
//}

void Shop::display_store(){
    for(int i=0; i<store.size(); i++){
        std::cout << i+1 << " ";
        store[i]->display();
    }
}