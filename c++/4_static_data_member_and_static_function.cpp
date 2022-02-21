/*******
 *use of static data members in c++ 
 * 
 * 
 */
 // sometimes we make diff objects and want to maintain same count for all of the objs 
 #include<iostream>
 using namespace std;
 class employee
 {
     int id;
     static int count;  //a static data member is shared by all objects of a class
                        // its like commom for all the objs ,, harry rohan sohan mohan are sharing the same variable count 
     public:
            void inputdata(void)
            {
                cin>>id ;
                count++;     // every time we are inputting data for diff objs the count is incresing 
            }
            
            void getdata()
            {
                cout<<id;
            }
          static  void noofemployee()
            {
                cout<<count;
            }
            
            
 };
 
 int employee::count; // because it comes with whole class and keeps on updating for diff objects  
                            // by default initilise to 0


int main()
{
   employee harry,rohan,mohan,sohan;
harry.inputdata();
harry.getdata();

rohan.inputdata();
rohan.getdata();

mohan.inputdata();
mohan.getdata();

sohan.inputdata();
sohan.getdata();

employee::noofemployee();  // calling static member function

    return 0;
}


