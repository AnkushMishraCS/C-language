#include<stdio.h>
int main(){
 int arr[5]={6,4,85,554,5};
 int max = arr[0];
  
 for (int  i = 0; i < 5; i++)
 {
  if (max<arr[i])
  {
    max=arr[i];
  }
  
 }
 printf("Maximum number is %d",max);





    return 0;
}