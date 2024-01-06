#include<stdio.h>
int main(){
 int arr[6]={1,5,6,4,8,0 };
 int min=arr[0];
 for (int  i = 0; i <6; i++)
 {
 if (min>arr[i])
 {
    min=arr[i];
 }
    
 }
 printf("Minimum number is %d\n",min);
 










    return 0;
}