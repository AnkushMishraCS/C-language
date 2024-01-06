#include<stdio.h>
int main(){
 int a=5;

 printf("%p \n",&a); // %p se address print  hota hai .
 int* x= &a ; 
     

// printf("%p \n",&a);   


 printf("%p \n",x); // x me a ka address  store   hai     
 printf("%d \n",*x);  // a ki value print hogi isse *x se  
 printf("%p \n",&x); // x  ka address print hogi isse.


*x = 187;   // this will change value of a.
printf("%d",a);

    return 0; 
}