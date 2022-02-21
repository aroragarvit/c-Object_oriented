#include<iostream>
using namespace std;

int main(){
    // Basic Example
    int a = 4;
    int* ptr = &a;
    *ptr = 999;
    cout<<"The value of a is "<<*(ptr)<<endl;

    // new operator
    // int *p = new int(40);
    float *p = new float(40.78);       // new data membr of float type 
    cout << "The value at address p is " << *(p) << endl;

    int *arr = new int[3]; // its allocating a block of memory 
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
    // delete[] arr;    will delete complete block of memory 
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    // delete operator
    
    return 0;
}