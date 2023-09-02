#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int n;

    cout<<"Enter the number: ";
    cin>>n;

    if(n % 2 != 0){
       cout<<"The number is odd"<<endl; 
    }else{
        cout<<"The number is even"<<endl;
    }

    return 0;
}
