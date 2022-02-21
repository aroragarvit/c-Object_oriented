 
 // IF NOT USING THE POINTER THEN  NOT ACCESSIBLE IN MAIN BLOCK WHY

#include<stdio.h>
#include<stdlib.h>


int* add(int *a, int *b){
   int c;

    int *ptr = &c ;
     c = (*a)+(*b);
    return ptr;
}
int main(){
    
    int a= 2, b = 4 ; 
    int *p= add(&a,&b);
    printf("%d",*p);
}

//it is not recommended to return the address of a local variable outside the function as it goes out of scope after function returns.
//Static Variables have a property of preserving their value even after they are out of their scope. So to execute the concept of returning a pointer from function in C you must define the local variable as a static variable.


 
 
 
 
 
 
 // no issues with that its completely normal
 /*
#include<stdio.h>
#include<stdlib.h>


int add(int a, int b){
   int c;

    
     c = a+b;
    return c;
};
int main(){
    
    int a= 2, b = 4 ; 
    int p= add(a,b);
    printf("%d",p);
};
*/
