#include <iostream>
using std::cout;
using std::endl;

#include "Account.cpp"


int main(){

    Account ac1(1000); 
    Account ac2(-9);

    cout << "Balance 1: " << ac1.getBalance() << endl;
    cout << "Balance 2: " << ac2.getBalance() << endl;

    ac2.credit(90);
    ac1.debit(9000);

    cout << "Balance 1: " << ac1.getBalance() << endl;
    cout << "Balance 2: " << ac2.getBalance() << endl;

    return 0;
}