
/* single ----one from one 

multiple -----single child from two parents 

hierirchal------  two child from a single parent 

multilevel ------ b from a and c from break

hybrid inheritance ----- multiple + multilevel + hiererchal also 

b and c from a and d from b and child*/

#include<iostream>
using namespace std;

class employee // base 
{ 
   
   public:
   
         int id ;
    
         int salary;
   
        employee(int i)//public  members func accessing private data we accessing member functions is the normal phenomenon
        {                      // all types of member functions can access data members of class 
            id = i;
            salary=34;
        }
        
        employee()
        {
         salary=85  ; 
        }
        void display()
        {
            cout<<id<<endl;
            cout<<salary<<endl;
        }
};
// derived class
/*
default visibility mode is private 
for private
public members of base class becomes private members of derived class 



for public visibility mode

public members of base class becomes public of derived class 


*/
class programmer : public employee
{   
    
    
    public:                            // constructor 
        programmer(int j)
        {
        id=j;             // id will not inherit if id is private 
        
            
        }
         int languagecode=9;
    
//  now in this code all members in base clss are public as well as all in derived are public and accessibility mode is also public 
};

int main()
{
    programmer garvit(1);
    
   cout<<" id and salary of programmer gavit  are"<<endl; garvit.display();   //first default const of base class is called then parametric const of derived class is called so in this case id is provided by const of derived class and salary by const of base class 
    cout<<garvit.salary<<endl;
   cout<<"language code of programmer garvit"<< garvit.languagecode<<endl;
   
   
   employee rakshit(2);
   
  cout<<"id and salary of employee rakshit as passed by parametric constructor of base employee class"<<endl;
  rakshit.display();
  
  return 0;
};
