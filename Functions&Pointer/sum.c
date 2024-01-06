#include<stdio.h>
 
 int sum(int x,int v){   // yha par x, v jodabbe banehai wo a,b se alag hai  pass by value Concept .

 return x+v;

 }
int main(){

int a,b;
  printf("Enter the value of A ");
  scanf("%d",&a);
  printf("Enter the value of B ");
  scanf("%d",&b);
  printf("Sum is %d ",sum(a,b));
 
 

    return 0;
}