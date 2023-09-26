#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int countNumber;
    double startMounthBalance;
    double totalChargedOfClient;
    double totalPayments;
    double limit;

    while(1){
        cout << "Enter account number (-1 to exit) > ";
        cin >> countNumber;

        if(countNumber == -1) break;

        cout << "Enter the initial balance > ";
        cin >> startMounthBalance;

        cout << "Enter the total of taxes > ";
        cin >> totalChargedOfClient;

        cout << "Enter the total of payments of the client > ";
        cin >> totalPayments;

        cout << "Enter the credit limit of the client > ";
        cin >> limit;

        cout << "New balance: U$" << startMounthBalance + totalChargedOfClient - totalPayments << endl;

        if(limit < ( startMounthBalance + totalChargedOfClient - totalPayments)){
            cout << "Account: " << countNumber << endl;
            cout << "Credit Limit: " << limit <<  endl;
            cout << "Balance" << startMounthBalance + totalChargedOfClient - totalPayments <<endl;
            cout << "Credit limit is outdated" << endl;
        }
    }


    return 0;
}