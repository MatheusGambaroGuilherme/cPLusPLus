#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"
 
    GradeBook::GradeBook(string courseName){
        setCourseName(courseName);
     }  

     void GradeBook::setCourseName(string nameCourse){
        if(nameCourse.length() <= 25){
            courseName = nameCourse;
        }else{
            courseName = nameCourse.substr(0, 25);

            cout << "Maximum caracters is 25" << endl;
        }
         
     }

     string GradeBook::getCourseName(){
        return courseName;
     }

     void GradeBook::getMessage(){
        cout << "Welcome to the grade book for " << getCourseName() << "!"<< endl;
     }

