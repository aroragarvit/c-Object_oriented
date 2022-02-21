// to solve the problem faced earlier 
// we want to run   functions of derived  class  with base class pointer pointing to derived object
// so whichever function is made virtual it will not run and other one will run 

#include<iostream>
using namespace std;

class Base 
{
public:

int base_var=43;

virtual void display()
{
    cout<<"base var is "<< base_var<<endl;
}

};
class Derived: public Base 
{
public:

int derived_var=100;

void display()
{
    cout<<"derived  var is "<< derived_var<<endl;
}

};

int main(){


Derived derived_obj;
    Base *base_pointer;

    base_pointer=& derived_obj;


    // now see which display will run 

    base_pointer->display();
}

// so in this way run time polymorphism is one as compiler decides during run time 

