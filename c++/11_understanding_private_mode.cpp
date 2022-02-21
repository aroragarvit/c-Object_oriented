//using private mode 

#include <iostream>

using namespace std;
class employee
{
    private:
        string name;
        
        int id;
        
    public:
        void input()
        {
        cin>>id>>name;
        }
        
        void display()
        {
            cout<<id<<endl;
            cout<<name<<endl;
            
        }
};
// private accessibility so private never inherit and public are inherited like private
class programmer : employee

{
  int salary;
  
  public:
        void take()
        {
        cin>>salary;
        }
        void give()
        {
            cout<<salary;
        }
        
  /* for derived class obj,,,, name and id are not inherited so only base class public 
  functions can access them 
  
  
  and in derived class salary is private functions take and give are public as well as public functions of 
  base class are inherited as private 
  */      
};
int main()
{
    programmer garvit;
    
    garvit.take();
    
    cout<<"salary is" <<endl;
    garvit.give();
   // garvit.input();
    // so above is not accessible by an obj of derived clss
    // as they are inherited as private so they couldnt be called 
    
    employee rakshit;
    
    rakshit.input();
    
    cout<<"id and name of employee are "<<endl;
    
    rakshit.display();
    return 0;
}