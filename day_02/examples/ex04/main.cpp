#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

class GradeBook{
   public: 
     GradeBook(string courseName){
        setCourseName(courseName);
     }  

     void setCourseName(string nameCourse){
        courseName = nameCourse;
     }

     string getCourseName(){
        return courseName;
     }

     void getMessage(){
        cout << "Welcome to the grade book for " << getCourseName() << "!"<< endl;
     }

   private:
     string courseName;
};

int main(){
    GradeBook gradeBook1("CS50");
    GradeBook gradeBook2("101 Computer Science");

    gradeBook1.getMessage();
    gradeBook2.getMessage();

    return 0;
}
