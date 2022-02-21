#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;        // we are dynamically doing nothing else 
    // (*ptr).setData(1, 54); is exactly same as
    ptr->setData(1, 54);                     // arrow as dereference 

    // (*ptr).getData(); is as good as 
    ptr->getData(); 


    // Array of Objects
    Complex *ptr1 = new Complex[4]; 
    ptr1->setData(1, 4); 
    ptr1->getData();


    (ptr1+1)->setData(100,200);
    (ptr1+1)->getData();
    return 0;
    

 
}