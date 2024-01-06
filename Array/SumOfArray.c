// Calcuulate the sum of all the elements in the  given array. 
#include<stdio.h>
int main(){
    int arr[5];
    int sum =0;
    int i;
for(i=0;i<=4;i++){
    printf("Enter the value of Element %d ",i+1);
    scanf("%d",&arr[i]);
    sum =sum+arr[i];
    
     }
    printf("Sum is %d ",sum);
    
    
      


 


 

    return 0;
}