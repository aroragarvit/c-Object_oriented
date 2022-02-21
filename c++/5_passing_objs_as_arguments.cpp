#include<iostream>
using namespace std;

class complex
{
  int a;			// real
  int b;			// imaginary
public:void setdata (int m, int n)
  {
    a = m;
    b = n;

  }
// we pass objs as  arguments when we want to use datamembrs of two of more objects
       void setdatabysum (complex o1, complex o2)
  { complex c3; // making oj in the class itself so that we can use it to assign its data members also
   c3.a = o1.a + o2.a;
   c3.b = o1.b + o2.b; // or o3.setdata( o1.a + o2.a,o1.b + o2.b)
    // objs are able to access  data members as they are passed as arguments in the class itself
  cout<<c3.a<<"+"<<c3.b<<"i";  }
};

int main ()

{
     complex c1, c2, c3;
     c1.setdata (1,2);
     c2.setdata(3,4);
     c3.setdatabysum(c1,c2);
     
     return 0;
};

