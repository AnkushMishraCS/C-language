// Write a program to  print the row number having the maximum sum in a given matrix.  
#include<stdio.h>
int main(){
int arr[4][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,18,19,20 };
 int r, maxsum = -1;
for (int  i = 0; i < 4; i++)
{ int sum=0;
    for (int  j = 0; j < 5; j++)
    {
       sum =sum+arr[i][j];
    
    r=i;}
    if (sum>maxsum)
    {
        maxsum=sum;
        r=i;
    }
    
}
printf("Max sum is %d and row is %d",maxsum,r+1);  //here r+1  for easy understanding of user.
  return 0;
}