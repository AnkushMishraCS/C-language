// find transpose of a matrix     2 methods

// Method 1  is best   (As well as advance method )

// method 1 without using any other matrix 

#include<stdio.h>  //  As per my testing ,This Method  is only working for square matrix . 
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


// Find the transpose of a given matrix by user and store  it in another matrix.

// By using another matrix to store transpose of current matrix.

#include<stdio.h>
int main(){
int r,c;
printf("Enter the number of Rows in Array ");
scanf("%d",&r);
printf("Enter the number of Columns in Array ");
scanf("%d",&c);
int arr[r][c];
int brr[c][r];
// scanning of elements starts.
for(int i =0;i<r;i++)
{
 for (int  j = 0; j <c; j++)
 {   printf("Enter the value of element %d of row %d ",j+1,i+1);
    scanf("%d",&arr[i][j]);
 }
 
}

  // main Logic starts 

printf("Tranpose of  given matrix is.....\n ");

 for (int  k = 0; k <c; k++)
 {
for (int l = 0; l < r;l++)
{ brr[k][l] = arr[l][k];
//     Printing of our new array  brr.
    printf("%d", brr[k][l]);
}  
     printf("\n");
 }
 


    return 0;
}