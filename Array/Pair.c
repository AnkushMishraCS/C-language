// Count the number of Pairs whose sum is equal to the given value x.
#include<stdio.h>
int main(){
    
 int n;

 printf("Enter the no. of elements in an Array : \n ");
 scanf("%d",&n);
 
 int arr[n];
  for (int  i = 0; i <n; i++)
  {
    printf("Enter the value of %d element  : \n ",i+1);
  scanf("%d",&arr[i]);
  }

  int pairs;
  printf("Enter the  max value \n"); 
  scanf("%d",&pairs);

 

int count=0;

 for (int  i = 0; i < n; i++)
 {  
 
  for (int  j =i+1; j <n; j++)
 {  
     if (arr[i]+arr[j]==pairs)
     { 
        count++;
 printf("Number of pairs are %d ",count);
      printf(" Pairs are (%d,%d)\n",arr[i],arr[j]);
     }
     
 }
 
    
 }
  






    return 0;
}