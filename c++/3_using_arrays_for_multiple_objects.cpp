
#include <iostream>

using namespace std;
int i=0;
class employee
{
    int id;
    int salary;
    public:
        void setid(void){
            salary=122;
            cout<<"enter the id of employee "<<i<<endl;
            cin>>id;
        }
        
        void getid(void){
            cout<<"the id of the employee is"<<id;
        }
};

int main()
{    
   employee e[4];  // taking data for 4 employees 
  for( i=0;i<4;i++)
  {
      e[i].setid();
      e[i].getid();
  }
    return 0;
}