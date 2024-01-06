// Write a program to find the sum of given matrix of n*m.
#include<stdio.h>
int main(){
int r, c;
    printf("Enter number of rows ");
    scanf("%d", &r);
    printf("Enter the number of columns ");
    scanf("%d", &c);
    int arr[r][c];
    int sum=0;
    // scanning start
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {  printf("Enter the value of element %d of row %d  ",j+1,i+1);
            scanf("%d",&arr[i][j]);
        
        sum=sum+arr[i][j];
        }
    }
    
    printf("Sum of the given array is %d",sum);






return 0;
}