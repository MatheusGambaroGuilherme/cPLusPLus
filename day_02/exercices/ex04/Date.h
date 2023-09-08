#include <string>
using std::string;

class Date{
    private:
        int dia;
        int mes;
        int ano;

    public:
    Date(int dia, int mes, int ano);
    int getDia();
    void setDia(int dia);
    int getMes();
    void setMes(int mes);
    int getAno();
    void setAno(int ano);
    string displayDate();
    
};