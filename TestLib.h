//Basic header file with guards
#ifndef TESTLIB_H
#define TESTLIB_H

//includes//
#include <Arduino.h>

//Classes//
class MyClass {
  
  public:
  MyClass(int pin);
  void myFunction();

  private:
    int _intField;
};



/*complex number struct definition*/
typedef struct {
char Name;
double R;
double I;
}complex;



//Function declarations//
void foo();

#endif
