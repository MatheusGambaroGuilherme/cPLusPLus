#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "Date.cpp"

int main(){
    Date d1(1, 12, 2006);
    Date d2(990, 190, -90);
    Date d3(12, 80, 1990);

    cout<<"d1: " << d1.displayDate() << endl;
    cout<<"d2: " << d2.displayDate() << endl;
    cout<<"d3: " << d3.displayDate() << endl;   

    return 0;
}