// Given a matrix having 0-1 , find the row with the maximum number of 1's.
#include<stdio.h>
#include<limits.h>
int main(){
    int max=INT_MIN;
    int r,count = 0 ;
 int arr[3][4]={1,0,1,1,0,1,0,1,1,0,0,1};
 for (int  i = 0; i < 3; i++)
 {     count = 0;
    for (int  j = 0; j < 4; j++)
    {
        if(arr[i][j]==1){
            count ++;
        
        }
    
    }
    if(max<count ){
        r=i;
        max=count ;
    }
 
 }
  printf("The row with maximum number of 1's  is %d and with  number of 1's is %d",r+1,max);   //r+1 for easy understanding for reader.

    return 0;
}   