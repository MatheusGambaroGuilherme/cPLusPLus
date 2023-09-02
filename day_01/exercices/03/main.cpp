#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int n1;
    int n2;

    cout<<"Enter n1: ";
    cin>>n1;

    cout<<"Enter n2: ";
    cin>>n2;

    if(n1 % n2 == 0){
        cout<<n1<<" is multiple of "<<n2<<endl;
    }else{
        cout<<n1<<" isn't multiple of "<<n2<<endl;
    }

    return 0;
}
