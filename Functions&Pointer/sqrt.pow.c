// Squareroot and power are some inbuilt functions in c 

#include<stdio.h>
#include<math.h>     // sqrt for squareroot and pow  for power of number  .   
 float squareroot(float a  ){


    return sqrt(a) ;
 }
 int powerr(int   b,int   c){
    return pow(b,c);
 }
int main(){

float  a;
int b,c;
printf("Enter the value of A ");
scanf("%f",&a);
printf("Enter the value of B ");
scanf("%d",&b);
printf("Enter the value of C ");
scanf("%d",&c);
     printf("The square root is %.2f \n ",squareroot(a));
  printf("%d to the power %d is  %d ",b,c,powerr(b,c));
    return 0;
}