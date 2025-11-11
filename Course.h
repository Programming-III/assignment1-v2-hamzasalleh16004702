#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;

class Course{
  private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
  public:
    course(string cc, string cn, int ms, Student* s, int cs){
      this -> courseCode = cc;
      this -> courseName = cn;
      this -> maxStudent = ms;
      this -> students = s;
      this -> currentStudents = cs;
    }
    void addStudent(const Student& s){
      if(currentStudents == maxStudent)
        cout << "error, students reached max" << endl;
      else
        currentStudents += 1;
    }
    void displayCourseInfo(){
      cout << "course: " << courseCode;
      cout << " - " << courseName << endl;
      cout << "Max Students: " << maxStudents << endl;
      cout << "currently enrolled: " << currentStudents << endl;
    }
}

#endif
