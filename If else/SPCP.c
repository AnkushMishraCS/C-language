#include<stdio.h>
int main(){
 
float sp,cp;
printf("Enter the Selling Price of an Item \n");
scanf("%d",&sp);


printf("Enter the Cost Price of an Item \n");
scanf("%d",&cp);
if(sp>cp){
   float profit ;
   float p=sp-cp;
    profit= (p/cp)*100 ;
    printf("Yes there is a profit of %f percent",profit);
}
else if ( cp>sp) {
 float loss;
 float l= cp-sp;
 loss= (l /cp)*100;
 printf("There is a loss of %f percent",loss);




} 
else {
    printf("No Profit and No Loss");
}

  return 0;
}
