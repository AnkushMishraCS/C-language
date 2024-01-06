//  Swap two numbers   

//  swap ka functioon using function galat hai  Pointer ka sahi hai.

// pointer ka use krke bna skte hai is function ko .

//  passs by value ka dhyaan rakhna    iska function kabhi mat bnana ,logic ko direct copy  pase krna  main function me .

// without using 3rd  variable.

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



// with using 3rd variable.

#include<stdio.h>
void swap(int a,int b){

 int temp =a;
 a=b;
 b=temp;
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