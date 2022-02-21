#include<iostream>
#include<conio.h>
 
using namespace std;
 
class Example {
   // Member Variable Declaration
   int a, b;
public:
 
   //Normal Constructor with Argument
 
   Example(int x, int y) {
      // Assign Values In Constructor
      a = x;
      b = y;
      cout << "\nIm Constructor";
   }
 
   //Copy Constructor with Obj Argument
 
   Example(const Example& obj) {
      // Assign Values In Constructor
      a = obj.a;
      b = obj.b;
      cout << "\nIm Copy Constructor";
   }
 
   void Display() {
      cout << "\nValues :" << a << "\t" << b;
   }
};
 
int main() {
   //Normal Constructor Invoked
   Example Object(10, 20);
 
   //Copy Constructor Invoked - Method 1
   Example Object2(Object);
 
   //Copy Constructor Invoked - Method 2
   Example Object3 = Object;

   //Copy Constructor Invoked - Method 3
   Example Object4 = Object;
 
   Object.Display();
   Object2.Display();
   Object3.Display();
   Object4.Display();
   // Wait For Output Screen
   getch();
   return 0;
}