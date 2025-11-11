#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class person{
private:
  string name;
  int id;
public:
  person(string n, int id){
  name = n;
  id = id;
  }
  void display(){
    cout << "name: " << name << endl;
    cout << "id: " << id << endl;
  }
}


#endif
