/*
hybrid 
a--->b
a--->c
and 
b---->d
c---->d
so d not able to understand that  a--->b--->d

or  a---->c---->d 

*/

/* so we will  declare class a as virtual  for both b and c so when we make d then a is coming directly so ambiguity is solved
*/


#include<iostream>
using namespace std;

class student
{
    protected:
    int roll_no;

    public:
    void set_number(int a)
    {
        roll_no = a;
        cout<<"your roll number is " << roll_no<<endl;
    }
  
};

class test : virtual public student
{
    protected:
    int maths , physics;
    void set_number(int a , int b ){
        maths = a;                         // in this case its  function overloading type 
        physics = b;


        
    }
};


class sports : virtual public student
{
    protected:

    int score;

    public:

    void set_number(int a )  // in this case its function overriding type 
    {
       score=a;


    }
};


class result: public test , public sports 
{
    private:

    int total;
public:


    void display (){
// are protected members are inherited as protected solved
// i am  calling all the functions here only
student::set_number(6888);

test::set_number(100,90);

sports::set_number(75);





total=maths + physics+ score ;
cout<<"your marks in maths are"<<maths<<endl;                        // they were protected thats the only reason we are ablt to use them maths , physics etc  if they were private then they would not be inherited at all
cout<<"your marks in physics are "<<physics<<endl;
cout<<"your marks in sports  are "<<score<<endl;

cout<<"your total is" <<total<<endl;

    }
};

int main()
{
    result r;

    r.display();

    return 0;
}

