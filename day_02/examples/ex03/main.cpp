#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;

class GradeBook{
    public:
        void getMessage(){
            cout << "Welcome to the Grade Book for "<< courseName << "!" << endl;
        }
        string getCourseName(){
            return courseName;
        }

        void setCourseName(string courseNameia){
            courseName = courseNameia;
        }

    private:
        string courseName;
};


int main(){
    GradeBook myGradeBook;
    string nameOfCourse;

    cout << "Enter the name of the course: ";
    getline(cin, nameOfCourse);

    myGradeBook.setCourseName(nameOfCourse);

    myGradeBook.getMessage();

    return 0;
}




