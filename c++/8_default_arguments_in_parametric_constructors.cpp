/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

class simple
{
    int data1;
    int data2;
    public:
        simple(int a,int b=9)
        {
            data1=a;
            data2=b;
            
        }
        void printdata();
        
};

  void simple:: printdata()
  {
      cout<<data1<<"\n"<<data2<<"\n";
  }
  
  int main()
  {
      simple s(1) , v(1,4);
      
      s.printdata();
      v.printdata();
      return 0; 
  };
