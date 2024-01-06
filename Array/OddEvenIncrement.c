// Given an array of integers,chage the value of all odd indexed elements to its second multiple and increment  all even indexed value by 10.
#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7 };
 for (int  i = 0; i<=6; i++)
 {
     if (i%2==0) arr[i]+=10;
    
    else arr[i]*=2 ;
 }

    for (int  i = 0; i<=6; i++)
    {
        printf("%d\n",arr[i]);
    }
    
 
    
    
    
    
    
    return 0;}