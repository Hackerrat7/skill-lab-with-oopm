#include <iostream>
using namespace std;

// Parent class
class MyClass {
  public: 
    void myFunction() {
      cout << "Hello, from the base class\n" ;
    }
};

// Child class
class MyChild: public MyClass {

};

// Grandchild class 
class MyGrandChild: public MyChild {

};

int main() {
  MyGrandChild myObj;
  MyChild obj;
  obj.myFunction();
  myObj.myFunction();
  return 0;
}
