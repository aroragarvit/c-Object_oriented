// constructors direct initilisation of objects of a class when obj is created
#include <iostream>

using namespace std;

class complex
{
  int a,b;
  char c;
 
  public:                  // this is s default constructor 
         complex()   // const is like a function only   
        {                       // to give values of our choice even using default const         
            cin>>a>>b;
            c='h'; // to give a fix value 
        } // no need to specify return type of a constructor 
        
        
        complex(int x , int y)
        {
            a=x;
            b=y;
           c='i';
        }
       void output()
        {
            cout<<a<<b<<c;
        }
        
};
  int main()
{
   complex c1 , c2 ;
   complex  c3(4,5),c4(6,7);
   c1.output();
  c2.output();
  c3.output();
  c4.output();
    return 0;
};

 /* const should be in public section of class 
 
 they are invoked whenever the object is created 
 
 they cannot return values and do not have return types 
 
 it can have default arguments */
 