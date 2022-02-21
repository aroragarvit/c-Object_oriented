
#include<iostream>
using namespace std;
class Complex{
public:
    int real;
    int imag;
     
     void entervalue()
    {
        cin>>real;
        cin>>imag;
    }
	
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
	/* Function to add two complex numbers */
 
    void sum(Complex c1, Complex c2)
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }

    /* function to multiply*/

    void multiply(Complex c1, Complex c2)
{
    real=c1.real*c2.real-c1.imag+c2.imag;
    imag=c1.real*c2.imag+c1.imag+c2.real;
}



void difference(Complex c1, Complex c2)
    {
        real=c1.real-c2.real;
        imag=c1.imag-c2.imag;
    }
 };
int main()
    {
        Complex c1,c2,c3;
        cout<<"Enter real and imaginary part of first complex number"<<endl;
        c1.entervalue();
        cout<<"Enter real and imaginary part of second complex number"<<endl;
        c2.entervalue();
        cout<<"Sum of two complex numbers is"<<endl;
        c3.sum(c1,c2);
        c3.display();
       cout<<"product of two complex numbers is ";
        c3.multiply(c1,c2);
        c3.display();


        cout<<"differnce of two complex numbers is ";
        c3.difference(c1,c2);
        c3.display();
    return 0;
    }