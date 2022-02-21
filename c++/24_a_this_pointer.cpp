#include<iostream>
using namespace std;

class test {

    int x ;

    public:

  /*  void setdata(int a)
    {
        a=a;
    }
}   */

// to solve this problem 
// whe nto use this pointer --1--> when local variables name is same as mambers name 

void setdata (int x)
{
    this->x = x;   // the this pointer is used to retrive the object's x
  // this arrow is similar to like ojb.x      // this pointer is a pointer which points to the  object which called the function 

}

void print(){
    cout<<"x="<<x<<endl;

}

};

int main()

{
test *ptr = new test; // obj using dma and pointer 

ptr-> setdata(4);   // using arrow rather *ptr.setdata()

ptr->print();

return 0;

}

/*----------------------------------------------------------------
#include <iostream>  
using namespace std;  
class Employee {  
   public:  
       int id; //data member (also instance variable)      
       string name; //data member(also instance variable)  
       float salary;  
       Employee(int id, string name, float salary)    
        {    
             this->id = id;    
            this->name = name;    
            this->salary = salary;   
        }    
       void display()    
        {    
            cout<<id<<"  "<<name<<"  "<<salary<<endl;    
        }    
};  
int main(void) {  
    Employee e1 =Employee(101, "Sonoo", 890000); //creating an object of Employee   
    Employee e2=Employee(102, "Nakul", 59000); //creating an object of Employee  
    e1.display();    
    e2.display();    
    return 0;  
}  

*/