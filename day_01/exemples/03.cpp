#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int number1;
    int number2;
    
    cout<<"Enter number 1: ";
    cin>>number1;

    cout<<"Enter number 2:";
    cin>>number2;

    if(number1 > number2){
        cout<<"Number 1 > Number 2"<<endl;
    }else if(number1 < number2){
        cout<<"Number 1 < number 2"<<endl;
    }else if(number1 == number2){
        cout<<"Number 1 == Number 2"<<endl;
    }
    return 0;
}
