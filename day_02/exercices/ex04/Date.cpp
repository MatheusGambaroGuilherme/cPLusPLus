#include <string>
using std::string;

#include "Date.h"
Date::Date(int dia, int mes, int ano){
    setDia(dia);
    setMes(mes);
    setAno(ano);
}

int Date::getDia(){
    return dia;
}

void Date::setDia(int dia){
    if(dia > 31 || dia < 1){
        this->dia = 1;
    }else{
        this->dia = dia; 
    }
}
int Date::getMes(){
    return mes;
}

void Date::setMes(int mes){
    
    if(mes > 12 || mes < 1){
        this->mes = 1;
    }else{
        this->mes = mes;
    }
}

int Date::getAno(){
    return ano;
}

void Date::setAno(int ano){
    if(ano < 0){
        this-> ano = 1;
    }
    else{
        this->ano = ano;
    }
}

string Date::displayDate(){
    string date = std::to_string(dia) +  "/" + std::to_string(mes) + "/" + std::to_string(ano);
    return date;
}