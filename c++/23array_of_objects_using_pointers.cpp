#include<iostream>
using namespace std;

class shop
{

int id;
float price;
public:

void setdata(int a , float b)
{
    id = a;
    price = b;
}
void getdata(void)
{
   cout<<"id item: "<<id<<endl;
   cout<<"price: "<<price<<endl; 
}

};

int main(){

    int size =4;

   // int *ptr = new int [34]  // normal  as we have done previous dynamically allocate block of memory for storing 34 integers 
    // ptr[0]= *ptr
    // now for object we are using the followng concept 
     
shop *ptr = new shop[size];
shop *ptrtemp=ptr; // important line so that after 1st for loop we could again bring pointer to correct position 
for (int i=0; i<size; i++)
{

    int p=0;
    int q=0;
   cout <<"enter id and price "<<i+1<<endl;
   cin>>p>>q;
   // (*ptr).setdata(p,q)   or 

   ptr-> setdata(p,q);
   ptr++;
// after coming out of this for loop ptr again at its start position 
}

for(int j=0; j<size; j++)
{
    ptrtemp->getdata();
    ptrtemp++;
}
return 0;
}


/*
object[] mixedArray = new object[4];
mixedArray[0]=10;
mixedArray[1]="Jack";
mixedArray[2]=true;
mixedArray[3]=System.DateTime.Now;
*/