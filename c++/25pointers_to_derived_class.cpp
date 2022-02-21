#include<iostream>
using  namespace std;

// run time polymorphism  at run time its example is virtual function that


class Base {
public:

int var_base;
void display()
{
  cout<<"displaying base class variable var_base "<<var_base <<endl;

}

};

class Derived: public Base {

    public:

    int var_derived;
    
    void display()
{
    cout<<"bse class variable "<<var_base<<endl;

    cout<<"derived class variable" <<var_derived<<endl;
}
};
int main()
{
    Base  * basepointer;
    Base ojb_base;

    Derived obj_derived;
    Derived *derivedpointer;
derivedpointer=&obj_derived;


    basepointer = &obj_derived;     // note its valid no problem with that
  // pointing base class pointer to derived class object 

  basepointer->var_base=34;

 // its could not be done  error THROWN  *********basepointer->  var_derived=64;

// because pointer is of base class so only base class functions and members are accessible 
// its late binding 
basepointer->display(); 



// derived class pointer will have acess to its materials as well as inherited materials as usual
derivedpointer->var_base=100;
derivedpointer ->var_derived=200;

derivedpointer -> display(); // preferance to derived vala function 


  return 0;

}