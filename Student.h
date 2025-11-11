#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;

calss student{
  protected:
    int yearLevel;
    string major;
  public:
    student(int yl, string m){
      yearLevel = yl;
      major = m;
    }
    void display(){
      cout << "year level: " << yearLevel << endl;
      cout << "major " << major << endl;
    }
}









#endif
