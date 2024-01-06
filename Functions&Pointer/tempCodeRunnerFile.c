#include<stdio.h>
void swap(int a,int b){
  
  a=a+b;
  b=a-b;
  a=a-b;

 
   printf("Value of A  is %d \n ",a);
  printf("Value of B  is %d",b);

}
int main(){
int a,n;
 printf("Enter the value of A ");
 scanf("%d",&a);
 printf("Enter the value of B ");
 scanf("%d",&n);
  swap(a,n);


    return 0;
}