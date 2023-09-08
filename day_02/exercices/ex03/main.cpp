#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

#include "Employee.cpp"

int main(){

    Employee e1("Matheus", "Gambaro", 10000);
    Employee e2("Rodrigo", "Guilherme", 8000);

    cout << "e1: " << e1.getNome() << " salário: " << e1.getSalarioMensal() << endl;
    cout << "e1: " << e2.getNome() << " salário: " << e2.getSalarioMensal() << endl;

    e1.setSalarioMensal(e1.getSalarioMensal() * 1.1);
    e2.setSalarioMensal(e2.getSalarioMensal() * 1.1);

    cout << "e1: " << e1.getNome() << " salário: " << e1.getSalarioMensal() << endl;
    cout << "e1: " << e2.getNome() << " salário: " << e2.getSalarioMensal() << endl;
    
    return 0;
}

