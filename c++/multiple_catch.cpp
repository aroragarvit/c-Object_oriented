#include <iostream>
#include <conio.h>
using namespace std;      // complete try catch in function only 
void handle(int test)
{
try
{
if (test==0)
throw test;
if (test==1)
throw 'a';
if (test==2)
throw 69.69;

else 
cout<<"moj karo"<<test<<endl;
}
catch(int i)
{
cout<< "Caught " << i << "\n";
}
catch(...)
{
cout<< "Caught one!\n";
}
}
int main( )
{
cout<< "start\n";
handle(0);
handle(1);
handle(2);
handle(3);
cout<< "end";
return 0;
}