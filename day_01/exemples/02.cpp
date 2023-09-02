#include <iostream>

int main(){
    int number1;
    int number2;
    int number3;
    
    std::cout<<"Enter the number 1: ";
    std::cin>>number1;

    std::cout<<"Enter the number 2: ";
    std::cin>>number2;

    number3 = number1 + number2;

    std::cout<<number3<<"\n"<<std::endl;

    return 0;
}
