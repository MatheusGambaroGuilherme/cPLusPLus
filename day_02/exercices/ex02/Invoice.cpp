#include <iostream>
#include <string>

using std::string;

#include "Invoice.h"

Invoice::Invoice(string desc, string id, int sold, int price){
    setDesc(desc);
    setId(id);
    setSold(sold);
    setPrice(price);
}

void Invoice::setDesc(string desc){
    this->desc = desc;
}
    
string Invoice::getDesc(){
    return desc;
}

void Invoice::setId(string id){
    this->id = id;
}

string Invoice::getId(){
    return id;
}

void Invoice::setSold(int sold){
    if(sold < 0){
        std::cout << "You cannot sold less than 0 units" << std::endl;
        this->sold = 0;
    }else{
        this->sold = sold;
    }
}

int Invoice::getSold(){
    return sold;
}

void Invoice::setPrice(int price){
    if(price < 0){
        std::cout << "Are you selling this for free?" << std::endl;
        this->price = 0;
    }else{
        this->price = price;
    }
    
}

int Invoice::getPrice(){
    return price;
}

int Invoice::getInvoiceAmount(){
    return (price * sold);
}
