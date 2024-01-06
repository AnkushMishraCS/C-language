// Write a program to reverse Array without using any other array.
// This is the bestest way to reverse full array as well as part of array
#include <stdio.h>
void rever(int arr[], int si, int ei)// here we are getting value from where to start reverse and till which index number.
{  

  for (int i = si, j <= ei; i < j; i++, j--)
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
  int si, ei;
  printf("From where you want to reverse Array \n");
  scanf("%d", &si);
  printf("Till where you want to reverse Array  \n");
  scanf("%d", &ei);

  //  Function call

  rever(arr, si, ei); // arr is array ,si is starting element, ei is ending element.

  for (int i = 0; i < num; i++)
  {
    printf("Element   is : %d\n", arr[i]);
  }
  return 0;
}



// Method 2



#include<stdio.h>
void reverse(int arr[]){

//  int i=0;
//  int j=4 ;//number of elements in Array -1.
//  while (i<j)
//  {
//     int temp =arr[j];
//     arr[j]=arr[i];
//     arr[i]=temp;
//     i++;

//     j--;

//  }
//  we can perform above loop with [FOR] loop also .
for (int i = 0,j=4; i <j; i++,j--)
{
    int temp=arr[j];
    arr[j]=arr[i];
    arr[i]=temp;
}

  for (int  i = 0; i <5; i++)
  {
    printf("%d\n",arr[i]);
  }
  
 
 return  ; }
int main(){
 int arr[5]={1,2,3,4,5};

 reverse(arr);
 return 0;
}