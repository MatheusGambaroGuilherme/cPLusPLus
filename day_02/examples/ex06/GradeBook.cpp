#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"
 
    GradeBook::GradeBook(string courseName){
        setCourseName(courseName);
     }  

     void GradeBook::setCourseName(string nameCourse){
        courseName = nameCourse;
     }

     string GradeBook::getCourseName(){
        return courseName;
     }

     void GradeBook::getMessage(){
        cout << "Welcome to the grade book for " << getCourseName() << "!"<< endl;
     }

