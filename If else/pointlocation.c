#include<stdio.h>
int main(){
  int x,y;
  printf("Enter the  value X  ");
  scanf("%d",&x);
  printf("Enter th value of Y  ");
  scanf("%d",&y);
  
  if(x==0&&y==0){
    printf("Point lies on the Origin ");
  }
  else if (y==0  ) {
    printf("Point lies on the X-Axis ");

  }
  
  else if ( x==0){

  printf("Point lies on the Y-Axis");
  }
  else
  printf("Point does not lies on any of the Axis");
  

 





    return 0;
}