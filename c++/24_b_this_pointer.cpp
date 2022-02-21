// To return reference to the calling object

#include<iostream>
using namespace std;

class A
{
    int a;


    public:
    A  setdata (int a )                      // A & reference variable to
              {
                  this->a=a;
                  return *this;   // * this is object actually 
              }


              void getdata()
              {
                  cout<<"the value of a is "<<a<<endl;

              }
    


};

int main()
{

A a;
a.setdata(4).getdata();            // a.setdata returns a object so 

return 0;
}