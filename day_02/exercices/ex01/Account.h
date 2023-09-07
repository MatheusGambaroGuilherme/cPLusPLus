#include <string>

class Account{
    public:
    Account (int balance);
    int getBalance();
    void setBalance(int balance);
    void credit(int total);
    void debit(int total);

    private:
    int balance;
};