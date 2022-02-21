/*  . dot is  class member access operator  access anything in class with objects < including  data members or functions > in 
classes we are  creating or in main but for in main it should be public */


 // all the functions of a class have access to alll the member functions
#include <string>
#include <iostream>// data member is created we input data in data member using obj then we can display data of obj using name of data member 
using namespace std;       // so yes we can use  data mamber in diff objs                            
class binary            // earlier like in complex no example we were using like obj.datamember                                          
{                                                                              
  string s;                                    
public:
  void read (void)                                    
  {
    cout << "enter the no";
    cin >> s;			// taking data 
    cout<<s;
  };


   private:int chk_bin (void)
  {
    for (int i = 0; i < s.length (); ++i)	// some functions in  strinh header 
      {
	if (s.at (i) != 0&&s.at (i) != 1)	
	  {
	  cout<<"your no is not binary "<<endl;
	
	  }
	
      }
  };
  public:
  void onescomplement (void)
  {
  for(int i=0; i<s.length();i++)
  {
      chk_bin();          
      if(s.at(i)=='1')         
      s.at(i)='o';
      
      else if( s.at(i)=='0')
      s.at(i)='1';
      
      
  }
  cout<<s;
}


};


int
main ()
  {
    binary b , c;
    b.read ();
  
    b.onescomplement();
    
    
    c.read ();
  
    c.onescomplement();
    return 0;
  }








