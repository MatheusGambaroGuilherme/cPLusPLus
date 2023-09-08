#include <string>
using std::string;

class Employee{
    private:
        string nome;
        string sobrenome;
        int salarioMensal;

    public:
        Employee(string nome, string sobrenome, int salarioMensal);
        string getNome();
        void setNome(string nome);
        string getSobrenome();
        void setSobrenome(string sobrenome);
        int getSalarioMensal();
        void setSalarioMensal(int salarioMensal);
};