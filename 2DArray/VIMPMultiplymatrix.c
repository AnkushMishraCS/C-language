 // Write a program to multiply 2  Matrices

#include <stdio.h>
int main()
{
    int R,C,r, c;

    // Input of 1 matrix.

    printf("Enter the number of rows in 1 Matrix ");
    scanf("%d", &R);
    printf("Enter the number of columns in 1 Matrix ");
    scanf("%d", &C);

    int arr[R][C];

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("Enter the value of element %d of row %d of Matrix 1", j + 1, i + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    // input of 2 Matrix starts

    printf(" Enter the number of rows in 2 Matrix  ");
    scanf("%d", &r);

    printf(" Enter the number of columns in 2 Matrix  ");
    scanf("%d", &c);

    int brr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the value of element %d of row %d of Matrix 2   ", j + 1, i + 1);
            scanf("%d", &brr[i][j]);
        }
    }
    // Main Logic starts

    if (C != r)
    {

        printf("These Matrices can not be multiplied ");
    }
    else
    {
        int res[R][c];

        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < c; j++)
            {
                res[i][j] = 0;    //Initilaised every element of  resultant matrix  to 0 before filling it.

                for (int k = 0; k < C; k++)
                {
                    res[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }


        //    printing of Final matrix starts


        printf("New Matrix is ........\n");
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < c; j++)

            {

                printf("%d  ", res[i][j]);

            }

            printf("\n");
        }
    }

    return 0;
}
