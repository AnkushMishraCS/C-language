#include<stdio.h>
int main(){
 int arr[2][2] = {1,2,1,2};
int brr[2][2]={4,5,6,7};
 int crr[3][3];
for (int  i = 0; i < 2; i++)
{for (int  j = 0; j < 2; j++)
{
    // Method 1 by using an extra array crr.

//  crr[i][j]=arr[i][j]+brr[i][j];
//   printf("%d ",crr[i][j]);

// Methos 2 without using an extra array 

  printf("%d",arr[i][j]+brr[i][j]);
}
printf("\n");
  }









    return 0;
}
