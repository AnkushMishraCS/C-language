#include<stdio.h>
int main(){
int r,c;
printf("Enter the number of Rows in Array ");
scanf("%d",&r);
printf("Enter the number of Columns in Array ");
scanf("%d",&c);
int arr[r][c];
 
// scanning of elements starts.
for(int i =0;i<r;i++)
{
 for (int  j = 0; j <c; j++)
 {   printf("Enter the value of element %d of row %d ",j+1,i+1);
    scanf("%d",&arr[i][j]);
 }
 
}
 
  // main Logic starts      

  for (int  a= 0; a <r; a++)
  {
    for (int q = a; q <c ;q++)
    {
         int temp ;
         temp =arr[a][q];
         arr[a][q] =arr[q][a];
         arr[q][a] =temp ; 
    }
    
  }
//   printing starts 
for (int  z = 0; z <r; z++)
{
    for (int  x = 0; x < c ; x++)
    {
        printf("%d",arr[z][x]);
    }
    printf("\n");
}



    
    
    return 0;
    }