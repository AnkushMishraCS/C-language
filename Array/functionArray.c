// Sabse phle  array me  pass by refernce chalta hai pass by value kuch  nahi hota.
// to swap wgerah krwana ho to bahut simple hai address pass nhi  karne padenge.
#include<stdio.h>
void function(int a[]){
  
int temp;
temp=a[0];
a[0]=a[1];
a [1]=temp;
 return;
 
}


int main(){
  int arr[2]={2,9};

printf("Value of Element  1 is %d \n ",arr[0]);
 printf("Value of Element 2 is %d\n",arr[1]);
 
  function(arr);

  
  printf("Value of Element  1 is %d \n " ,arr[0]);
 printf("Value of element 2 is %d",arr[1]);
 




    return 0;
}