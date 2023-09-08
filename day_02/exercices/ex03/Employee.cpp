#include <iostream>
#include "Employee.h"
#include <string>
using std::string;

Employee::Employee(string nome, string sobrenome, int salarioMensal){
    setNome(nome);
    setSobrenome(sobrenome);
    setSalarioMensal(salarioMensal);
}


string Employee::getNome(){
    return nome;
}

void Employee::setNome(string nome){
    this->nome = nome;
}

string Employee::getSobrenome(){
    return sobrenome;
}

void Employee::setSobrenome(string sobrenome){
    this->sobrenome = sobrenome;
}

int Employee::getSalarioMensal(){
    return salarioMensal;
}

void Employee::setSalarioMensal(int salarioMensal){
    if(salarioMensal < 0){
        this->salarioMensal = 0;
    }else{
        this->salarioMensal = salarioMensal;
    }
}
