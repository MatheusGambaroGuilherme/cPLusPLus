#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main(){
    int n1;
    int n2;
    int n3;

    int biggest;
    int lower;

    cout<<"Enter n1: ";
    cin>>n1;

    cout<<"Enter n2: ";
    cin>>n2;
    
    lower = n2;

    cout<<"Enter n3: ";
    cin>>n3;

    biggest = n3;

    cout<<"Averege: "<< (n1 + n2 + n3) / 3 << endl;

    cout<<"Sum: "<< n1 + n2 + n3<< endl;

    cout<<"Product: "<< n1 * n2 * n3<< endl;
    
    if(n1 > n2 && n1 > n3){
        biggest = n1;
    }else if(n2 > n1 && n2 > n3){
        biggest = n2;
    }

    if(n1 < n2 && n1 < n3){
        lower = n1;
    }else if(n3 < n1 && n3 < n2){
        lower = n3;
    }
    
    cout<<"Biggest: "<<biggest<<endl;

    cout<<"Lower: "<<lower<<endl;

    return 0;
}
