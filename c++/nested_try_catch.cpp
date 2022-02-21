#include<iostream>
using namespace std;


int main()
try {

    try
    {
        throw "a character exception ";
    }
    catch(const char *e )
    {
        cout << "character type in inner block----> "<<e<<endl;
        cout<<"rethrowing the exception "<<endl;
        throw;
// again same exception thrown

    }


}
// ... catches all kind of exceptions 
catch(...){
    cout<<"unexpected exception in outer block "<<endl;
}