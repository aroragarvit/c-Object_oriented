#include<iostream>
using namespace std;
class Base
{
    int data1; // cant be inherited as its private member
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();

};

void Base::setdata(void)
{
    data1 =10;

    cout<< "value of data 2 is enter it ";
    cin>>data2;
}


int Base::getdata1()
{
    return data1;

}


int Base::getdata2()
{
  return data2;

}




class Derived: public Base
{
    int data3;

    public:
        void process();
        void display();

};


void Derived::process()
{

    data3 = data2*getdata1();
}
void Derived:: display()
{
  cout<< "value of data 1 is " << getdata1()<< endl;
  // we inherited getdata1 as public so we can directly use it in derived class derived

  cout<<"value of data 2 is "<< data2<<endl;
  cout<<"value of data 3 is" <<  data3<< endl; // methods of derived class have access to private members of derived class also
}

int main()
{
Derived d1;

d1.setdata();

d1.process();

d1.display();

    return 0;
}