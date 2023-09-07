#include <iostream>
#include "GradeBook.cpp"
#include <string>


int main(){

    std::string name;
    std::cout << "Enter the course name: ";
    std::cin >> name;


    GradeBook gradeBook1(name);

    gradeBook1.getMessage();

    return 0;
}
