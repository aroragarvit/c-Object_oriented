#include<iostream>
using namespace std;

class base1
{
    public:

    void greet()
    {
        cout<<"how are you? i am from base1 "<<endl;

    }
};

class base2{

    public:
    void greet()
    {
        cout<<"how you doing?  i am from base 2 "<<endl;


    }
};


class derived: public base1 , public base2
{
    int a; 


  public:

  void greet()
  {
     cout<< "hello guys i am from derived class"<<endl;
  } /* we could also have used in this way as void greet()
  {
      base1::greet();
  }
  */
};

int main()
{
    base1 base1obj;
    base2 base2obj;
    base1obj.greet();  // greet function of base 1 only 
    base2obj.greet(); // greet function of base 2 only

    derived d ;

    d.greet();    // in this case simply greet from derived class will be called 

    //  solving the problem if i want to call the function of base class using derived class object then use scope resolution

    d.base1::greet();



}