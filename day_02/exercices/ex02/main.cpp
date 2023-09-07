#include <iostream>
using std::cout;
using std::endl;

#include "Invoice.cpp"

int main(){

    Invoice i1("Bomb", "id190", 90, 1000);
    Invoice i2("car", "idv12", -9, 9000);


    cout<<"Total i1: " << i1.getInvoiceAmount() << endl;
    cout << "Total i2: " << i2.getInvoiceAmount() << endl;


    return 0;
}