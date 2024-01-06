// Write a program to stroe roll number and marks obtained by 4 students side by side in a matrix
#include<stdio.h>
int main(){
    int rows;
 printf("Enter the number of students ");
 scanf("%d",&rows);
 int arr[rows][2];

  
  for (int  j= 0; j < rows; j++)
 {
    printf("Enter roll number ");
    scanf("%d",&arr[j][0]);

 }
  
 for (int  i = 0; i < rows; i++)
 {
  
 
  
printf("Enter Marks  ");
    scanf("%d",&arr[i][1]);
     
 }
 for (int i = 0; i < rows; i++)
 {
  printf("|Student %d | Roll number %d | Marks %d \n"| i+1,arr[i][0],arr[i][1]);
     
 }
 
 
   




    return 0;
}