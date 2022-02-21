/*
1--> If there is constructor in base class without any arguments then it will be called automatically even when a obj of derived class is created 
2--> If there are one or more arguments  in base calss constructor derived class need to pass arguments to base class constructor 
3--> if both base and derived class have constructors then base class constructor is executed first 
4--> a-->c  b-->c  in multiple inheritance   base classes are constructed in order in which they appear in the class declaration 
in this case first  a then b 
5-->  a-->b-->c in multilevel inheritance the constructors are executed in order of inheritance base classes
in this case first a then b  then c   

                           SPECIAL SYNTAX 

To pass  arguments to multiple arguments to base classes

The constructor of derived class receive all the arguments at once and  then will pass the calls to respective base classes

the body is called after constructors are finished executing

learn in examlple 

virtual base class :; constructor of virtual base class is also invoked before an nonvirtual base class




*/



/*----------------------------------------------------------------

case 1-->  class b : public arguments{
    order of execution  first a() ---> then b()

}

case 2 --> 
class a : public b, public c{
    b() then c() and  a()
}


case 3--> class a : public b, virtual public c{
    order of execution c() then b( ) and a()
}
#----------------------------------------------------------------*/

#include<iostream>

using namespace std;
class base1
{
    int data1;

    public: 
    base1(int i)  // return type not necessary in case of constructor 
    {
        data1 = i;
        cout<<"Base1 class constructor called "<<endl;
        cout<<"the value of data 1 is "<< data1<<endl;
    }

  

};

class base2
{
    int data2;

    public: 
    base2(int i)  // return type not necessary in case of constructor 
    {
        data2 = i;
        cout<<"Base2 class constructor called "<<endl;
        cout<<"the value of data 2 is "<< data2<<endl;
    }

    
};

class base3
{
    int data3;

    public: 
    base3() 
    {
       data3=10;

        cout<<"Base3 class constructor called "<<endl;
        cout<<"the value of data 3 is "<< data3<<endl;
    }


  
};




class derived: public base1 , public base2 , public base3
{
  int derived1,derived2;

  public:
  derived(int a , int b, int c , int d): base1(a) , base2(b)  // explicitily call the base classes  and pass values to them 
  {
      derived1=c;
      derived2=d;

      cout<<"derived class constructor is called "<<endl;
      cout<<"the value of derived 1 and derived 2 is "<<derived1<<"and"<<derived2<<endl;
  }

 
};

int main()

{
    derived garvit (1,2,3,4);
    
    return 0;
};

// sequence base1 then base 2 then base 3  then derived ,,,,,, and constructor of base 3 is default so it can be called without the help of derived class constructor 