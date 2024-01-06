// write a program to reverse some part of array not full array.
// for EX. arr[6]={1,2,3,4,5,6}
// reverse  arr[6]={1,5,4,3,2,6}
// This is advance program which can reverse full array also we justy need to pass value of SI and EI.
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