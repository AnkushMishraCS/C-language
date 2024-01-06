#include<Stdio.h>
int main(){
float length,breadth;
 printf("Enter the Length of the rectangle \n");
 scanf("%f",&length);
 printf("Enter the Breadth of the rectangle\n ");
 scanf("%f",&breadth);
 float perimeter;

perimeter = (length + breadth) *2;
 

 float area = length *breadth ;
  

if(area>perimeter){
    printf("Area is greater than Perimeter \n");
    printf("Area of rectangle is :%2.f \n",area);

}
else {
    printf("Perimeter is greater than Area \n ");
    printf("Perimeter of rectangle is :%2.f",perimeter);
}



    return 0;
}