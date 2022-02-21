#include<iostream>
#include <stdexcept>

using namespace std;

void add(int a,int b) throw(int ,char , runtime_error ) // need to specify all types of exceptions that it can throw 
{
if (a+b>10)
{
    throw 10;
}

if (a+b<0)
throw 'a';

else 
throw runtime_error("not good");
}

int main(){

    try
    {
        add(1,1);
    }

    catch(int e)
    {
        cout<<"int type "<<e<<endl;

    }

    catch(char c)
    {
        cout<<"char type "<<c<<endl;

    }

    catch(runtime_error r)
    {
        cout<<"runtime error type"<<r.what()<<endl;
    }
}