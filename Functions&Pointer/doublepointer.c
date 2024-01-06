// Double Pointers

#include<stdio.h>
 int main(){
  
int x=9;
int *a= &x; // a ke andar x ka address store hai .

int **b =&a;//   b ke andar a ka address store hai  , value store nahi hai . 

printf("%p\n",&x);    // x ka address  ka address print hoga  
printf("%d\n",x);  // x ki value print krega 
printf("%p\n",&a);  // A ka address  ka address print hoga 

printf("%d\n",*a);  // x ki value print krega  

printf("%p\n",a);    // x ka address print hoga 

printf("%p \n",b);       // a ka address print hoga.

printf("%d",**b);  // x ki value print krega   
    return 0;
 }