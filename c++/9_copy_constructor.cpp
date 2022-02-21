
#include <iostream>

using namespace std;

class number
{
    int a ;
    
    public:
        number(){
            a=0;               
        }   // making a default also
        number(int num)
        {
            a=num;     // para const 
        }
        void display()
        {
            cout<<a<<endl;
        }
        number( number &ojb)
        {   
            cout<<"copy called"<<endl;
            a=ojb.a;
        }
};

int main()
{
  number x,y,z(45); // z2;
  x.display();
  y.display();
  z.display();
  number z1(x);
  z1.display();              // it would be called even if i remove copy constructor  that i made because compiler provides a constructor by default 
  // z2=z;  copy const not called because already made obj we are copying value so its senseless                        // 
   number z2=z;
   z2.display(); // now its called because we are creating a fresh obj thi time 
    return 0;
};

//if we have not defined a copy constructor then default copy cosnt is called provided by compiler  

