#include<iostream>
#include<string>
using namespace std;

class Teacher {

  int age;   //private by default

public :
  void setAge(int newAge) {   //setter function
    age = newAge;
  }

  int getAge() {   //getter function
    return age;
  }
};

int main() {
  Teacher t1;   
  // t1.age =  10;   //we cannot access private members outside the class
  t1.setAge(22);   //we can access private members outside class using getters and setters
  cout << "age : " << t1.getAge() << endl;
}

