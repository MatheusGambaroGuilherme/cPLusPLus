#include <iostream>
#include "Account.h"

Account::Account(int balance){
    if(balance > 0){
        setBalance(balance);
    }else{
        setBalance(0);
    }
    
}

void Account::setBalance(int balance){
    this->balance = balance;
}

int Account::getBalance(){
    return balance;
}

void Account::credit(int total){
    balance += total;
}

void Account::debit(int total){
    if(total > balance){
        std::cout<<"debit amount exceeded account balance"<<std::endl;
    }else{
        balance -= total;
    }
}