#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    double km;
    double l;
    double totalKm;
    double totalL;

    while(1){
        cout << "Enter the kilometrage: (-1 to quit) > ";
        cin >> km;

        if(km == -1) break;

        cout << "Enter the liters > ";
        cin >> l;

        totalKm += km;
        totalL += l;

        cout << "Km / liters of this gas tank: " << km / l << endl;
        cout << "Total Km / liters: " << totalKm / totalL << endl;

    }
    

     

    return 0;
}