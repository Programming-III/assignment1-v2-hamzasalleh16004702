#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;

class Instructor{
  private:
    string department;
    int experienceYears;
  public:
    instructor(string d, int ey){
      this -> department = d;
      this -> experienceYears = ey;
    }
    void display(){
      cout << "department: " << department << endl;
      cout << "experience years: " << experienceYears << endl;
    }
}

#endif
