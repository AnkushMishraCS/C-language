// Pass by reference 
//  swap ka functioon using function galat hai  Pointer ka sahi hai.

//  this is the real function which we can use in our code to get the value swaped .
 #include<stdio.h>
 void swap(int *a , int *b){
  int temp=*a;         //temp = a
  *a=*b;              //a=b
  *b=temp;           //b=temp 
 return ;   

 }
 int main(){

 int a,b ;
printf("Enter the value of A ");

scanf("%d",&a);
printf("Enter  the value of B ");

scanf("%d",&b);
swap(&a,&b);

printf("The value of A is %d and Value of B  is %d ",a,b);

    return 0;
 }