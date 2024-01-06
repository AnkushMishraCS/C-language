// Write a program to Reverse the  Array. 
#include<stdio.h>
int main(){
 int arr[5]={1,2,3,4,5};
int brr[5];
 for (int  i = 0 ; i <=4; i++ )
 { brr[i]=arr[4-i];  // ** 5-i-1   .   Copying element of original array into another array.
    
 }
 for (int  i = 0 ; i <=4; i++ ) //Copying element of another array into Original Array .
 { arr[i]=brr[4-i];
    
 }

for (int  i = 0; i <5; i++)
{
        
    printf("%d\n",arr[i]); // Simply  Printing elements  

}
   return 0;
}