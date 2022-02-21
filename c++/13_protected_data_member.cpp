#include<iostream>
using namespace std;
//i want to inherit it but dont want it that anyone can have access to it
class Base
{

  protected:
  int a;   

private:
int b;

};
/*
For a protected member
                        public derivition         private derivition         protected derivition 
 1 private  members        NOt inherited              NOt inherited              NOt inherited 
 2 protected members       protected                  private                    protected
 3 public members          public                     private                    protected       

 */


class Derived: protected Base
{   



public:
   void setdata()
   {  
       cout<<"enter the value for a ";
       
       cin>>a;

   }
   
   void getdata()
   {
       cout<<a;
   }


};

int main ()
{
    Base b;
    Derived d;

   // cout<<b.a;   // note protected cant be directly  in this way it behaves the same as private not accessible directly as it is protected in both derived and base class 

   // but  member function of both base as well as derived has acces to it in case of private it was  private members are not even inherited in derived class 

   d.setdata();
   d.getdata();

    return 0;
}