// Count the number of triplets whose sum is equal to the given value x.
#include<stdio.h>
int main(){

int arr[7]={1,2,3,4,5,6,7};
int max;
printf("Enter the maximum value  ");
scanf("%d",&max);
int  count=0;
 for (int  i = 0; i <7; i++)
 {
    for (int  j = i+1;j < 7; j++)

    {
        for (int k = j+1;k <7; k++)
        {
            if (arr[i]+arr[j]+arr[k]==max)
            {
                 
            count++;
            }
            
        }
        
         
    }
    
 }
 
printf ("No. of pairs are %d",count);


    return 0;
}