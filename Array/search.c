// Given array ,and a number x .Find out if x lies in the array or not ,if yes then print the index.
#include<stdio.h>
#include<stdbool.h>  //True False isi ki help se kiya hai.
#include<limits.h>  //Sabse minimum value di hai INDEX  variable ko
int main(){
int arr[5]={1,2,3,4,5};
int n; 
 bool count =false;
printf("Enter the number for which You  want to check  ");
scanf("%d",&n);
int index=INT_MIN;
 
for (int  i = 0; i <5; i++)
{ if(arr[i]==n){
    count =true ;
index=i;      //Index ki value loop ke sath khatam na ho jae islie dusra variable bna kar store kar li hai is value ko
    break;
}
    
}
if (count==true)
{
   
printf("Yes %d is Present and its Index number is %d",n,index);
 
} 
else
printf("No %d is not present",n);







    return 0;
}