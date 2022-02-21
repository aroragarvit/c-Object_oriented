#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;


int main()
{
	fstream fp;
	
	fp.open("file1.txt",ios::out | ios::ate);
	cout<<"writing to the file"<<endl;
	fp<<"This is one line"<<endl;
	fp<<"this is second line\n"<<endl;
	
	int pos=fp.tellp();
	
	cout<<"\n current position of put pointetr:"<<pos<<endl;
	
	fp.seekp(-10,ios::cur);
	
	fp<<endl<<"Writing at random location";
	//move 7 bytes forward from beg of file
	fp.seekp(7,ios::beg);
	fp<<"Hello World";
	fp.close();
	
	fp.open("file1.txt",ios::in| ios::ate);
	
	fp.seekg(0);
	char buf[100];
	
	while(!fp.eof())
	{
		fp.getline(buf,100);
		cout<<buf<<endl;
}
 	cout<<"Position of get pointer is";
 	pos=fp.tellg();
 	cout<<pos;
 
 	fp.close();
 
		
	}
