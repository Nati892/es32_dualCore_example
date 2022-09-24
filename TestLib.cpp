#include "TestLib.h"


//Globals//
int constA=1;


//class definitions
MyClass::MyClass(int pin) {
  pinMode(pin, OUTPUT);
  _intField = pin;
}
void MyClass::myFunction(){
}  



void foo(){
    Serial.println("doing stuff");
}
