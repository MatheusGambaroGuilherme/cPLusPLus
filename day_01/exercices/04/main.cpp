#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    char  n;

    cout<<"Enter a letter: ";
    cin>>n;

    cout<< static_cast<int>(n)<<endl;

    return 0;
}
