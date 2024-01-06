// Write a program to rotate array  by given number 
// For ex rotate array [4]={1,2,3,4} by 2  
// Final array after rotation is {3,4,2,1}

//Logic
// reverse full array 
// Reverse first k elements(here k is the number of rotations given in question).
// Reverse left elements of Array.
//  Done you have solved your question.

#include <stdio.h>
void rever(int arr[], int si, int ei)// here we are getting value from where to start reverse and till which index number.
{  

  for (int i = si, j = ei; i < j; i++, j--)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  return;
}

int main()
{

  int num;
  printf("Enter the number of elements in Array ");
  scanf("%d", &num);
  int arr[num];

  for (int i = 0; i < num; i++)
  {
    printf("Enter the value of Element %d \n", i + 1);
    scanf("%d", &arr[i]);
  }
  int si, ei,rotations;
  printf("No. of Times You want to Rotate an Array ");
  scanf("%d",&rotations);
  

   
 rotations=rotations%num;
 
  //  Function call

  rever(arr, 0, num-1);
  rever(arr,0,rotations-1);  
 rever(arr,rotations,num-1);
  for (int i = 0; i < num; i++)
  {
    printf("  %d", arr[i]);
  }                                
  return 0;
}