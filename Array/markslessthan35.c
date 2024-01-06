// Given an array of marks of students , if the marks of any student  is less than 35 print its roll number.[Roll no. here refers to the index of array.]

#include<stdio.h>
int main (){
   int arr[10]={98,64,12,35,46,51,26,45,79,98};
int j;
for ( int i = 0; i <10; i++)
{
  if(arr[i]<35){
    printf("index number of less than 35 is %d \n",i);
  }
    


 
}

   
   
 return 0;

}