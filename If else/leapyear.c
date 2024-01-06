#include<stdio.h>
int main(){
    int year;
   printf("Enter any year");
   scanf ("%d",&year) ;
   if ((year%4==0)||(year%400==0)&&(year!=100))
   { 
    printf("Yes it is a leap year");
   }
   else
   printf("No it is not a leap year");









 return 0;}