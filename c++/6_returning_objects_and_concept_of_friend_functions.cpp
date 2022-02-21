/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:
        void setnumber(int n1 , int n2)
        {
            a=n1;
            b=n2;
        }
        
        void printno()
        {
            cout<< "your no is"<< a <<"+"<< b<< "i"<<"\n"; 
        }
        // friend name of class name of functio
        // its allowed to access all the data of this class alsp although its not a member of this class
        friend complex sumcomplex(complex o1, complex o2);
        
        
};
        complex sumcomplex(complex o1, complex o2)
         {complex o3;                              // now private data can be accessed as its a friend 
         o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
         return o3;
             
         };

int main()  // note that names of all the actual objects are actually different 
{
    complex c1 , c2 , sum;
    
    c1.setnumber(1,4);
    c2.setnumber(5,8);
    c1.printno();
    c2.printno();
    // very important its not called by any object 
    
    sum=sumcomplex(c1,c2); // its has like returned 03 so its similar to c3.printno() on next line
    sum.printno();
    
};
/*  properties of some friend functions 
not iin scope of the class 

sicne its not in clas  scope so it couldnt be called by obj of that class 
c1.sumcomplex will be invalid 

can be invoked without help of any obj  (its more like a normal function )

it usually contains objs as arguments 

it cannot access the members  directly  by the name of member its need to be like this datamember =obj.datamember ;;
in this case */








