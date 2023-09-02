#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

class GradeBook{
    public:
        void getMessage(string nameOfCourse){
            cout << "Welcome to the Grade Book for "<< nameOfCourse << "!" << endl;
        }
};


int main(){
    string nameOfCourse;
    GradeBook myGradeBook;

    cout << "Enter the name of the course: ";
    getline(cin, nameOfCourse);

    myGradeBook.getMessage(nameOfCourse);

    return 0;
}
