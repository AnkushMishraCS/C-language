// Write a program to rotate  a matrix 90 degree

// LOGIC behind this program

// we can rotate matrix by 90 degree ,reverse each row of transpose of a matrix  will  automatically   rotate our array .

#include<stdio.h>  // May be this method is only  for square  matrix.
int main()
{
    int r, c;
    printf("Enter the number of Rows in Array ");
    scanf("%d", &r);
    printf("Enter the number of Columns in Array ");
    scanf("%d", &c);
    int arr[r][c];

    // scanning of elements starts.
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the value of element %d of row %d ", j + 1, i + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    // main Logic starts
      
    //       Transpose  start
    for (int a = 0; a < r; a++)
    {
        for (int q = a; q < c; q++)
        {
            int temp;
            temp = arr[a][q];
            arr[a][q] = arr[q][a];
            arr[q][a] = temp;
        }
    }
    int h, v;             
    //  reverse of  each row  start   (will  rotate our array )
    for (int t = 0; t < r; t++){
        h = 0;
       v = c - 1;

    while (h < v)
    {int temp = arr[t][h];
        arr[t][h] = arr[t][v];
         arr[t][v] =temp;
        h++;
        v--;
    }
    }
//   printing starts
for (int z = 0; z < r; z++)
{
    for (int x = 0; x < c; x++)
    {
        printf("%d", arr[z][x]);
    }
    printf("\n");
}

return 0;
}
