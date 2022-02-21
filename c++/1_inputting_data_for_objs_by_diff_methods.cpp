#include <iostream>

using namespace std;
class employee
{
    private:
          int salary,daysjob,age, leaves;
    public:
          int yearwork,rank;
          void setdata(int a1,int b1, int c1);  /*  declarationin   1___ method for passing data 
          using arguments  from obj 
         class function  have access to all members of class
  // a1 b1 and c1 are nothing but just arguments so that we can pass data about 
  private data members like salary daysjob age  form our own objects using set data functions */
         void knowleaves()
         {  cout<<"input the no of leaves ";
             cin>>leaves;
            
         }
          void getdata()
         {
          cout<<"the value of salary is "<<salary<<endl;
          cout<<"the value of daysjob is "<<daysjob<<endl; 
          cout<<"the value of age is "<<age<<endl;                 // these data members contains values  for obj passed 
          cout<<"the value of yearwork is "<<yearwork<<endl;
          cout<<"the value of rank is "<<rank<<endl;
          cout<<"leaves you have take is "<<leaves<<endl;
         }
};
// defining set data function 
void employee :: setdata(int a1 , int b1, int c1)
{
    /*a1=salary;
    b1=daysjob;
    c1=age;*/
    // not this we are pasing a1 a2 a3 parameters  not salary so do like this 
    salary=a1;
    daysjob=b1;
    age=c1;
    
    
}
          
int main()

    
                                              
{
   employee  harry;   // created an object of class 
   harry.setdata(1,2,4);  /* passed as arguments for parameters a1, b1,c1 which 
   aare further  equal to  salary daysjob and age and as function is public it will follow*/
harry.yearwork=34;
harry.rank=43;         // are  public so can access from main directly                            // 2 ---- method to input data 
 harry.knowleaves();   // 3----- method i am inputting data  manually by taking data from user 
 harry.getdata();
    return 0;
}
// whenever we are using . its for all the content of the class if function then obj.function()
// if a data member then no brackets 

