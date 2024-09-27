#include<iostream>
#include<string>
using namespace std;

class Teacher {
public :   //access specifier
  string name;
  string subject;   //properties or attributes or data members
  string dept;
  int age;

  void changeDept(string newDept) {   //methods or member functions
    dept = newDept;
  }
};

int main() {
  Teacher t1;   //object creation
  t1.name = "Bharat";
  t1.subject = "Maths";
  t1.age = 22;
  t1.dept = "ME";
  cout << "name : " << t1.name << endl;
  cout << "subject : " << t1.subject << endl;
  cout << "age : " << t1.age << endl;
  cout << "old dept : " <<  t1.dept << endl;
  t1.changeDept("CSE");
  cout << "new dept : " << t1.dept << endl;
}

