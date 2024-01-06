// Remember One thing in Array the address is like    . arr[row][column]

//There are many ways to scan data in this table  like this way or initialise.
// 1 2
// 3 4

// THESE ALL ARE CORRECT WAY 
//  Ways to initialise a 2D Array 
int arr[4][2]={{1234,56},{1256,46},{1434,23},{1465,45}};
int arr[4][2]={1234,56,1256,46,1434,23,1465,45};
int arr[2][3]={12,13,14,15,16,17};
int arr[][3]={1,2,3,4,5,6};  //in this computer will automatically fetch the value of ROWS as we already defined values and columns; 
















#include<stdio.h>
int main(){
int arr[2][2];

arr[0][1]=1;
arr[0][2]=1;
arr[1][1]=1;
arr[1][2]=1;

    return 0;
}
// Method 2
// we can  do this same work by
#include<stdio.h>
int main(){

int arr[2][2]={{1,2},{3,4}}  //Basically in this we  are taking  this  as rows.row1=1,2 and row 2=3,4.

    return 0;
}

 