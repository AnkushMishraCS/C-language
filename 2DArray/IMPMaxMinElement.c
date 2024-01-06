// Find the maximum and minimum element in array .

#include <stdio.h>
#include <limits.h>
int main()
{

    int max = INT_MIN;
    int min = INT_MAX;
    int r, c;
    printf("Enter the number of rows in array ");
    scanf("%d", &r);
    printf("Enter the number of columns in Array ");
    scanf("%d", &c);

    int arr[r][c];

    for (int i = 0; i < r; i++) // scanning starts
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter  the value of element %d of row %d ", j + 1, i + 1);
            scanf("%d", &arr[i][j]);
            if (max < arr[i][j]) // For Maximum
            {
                max = arr[i][j];
            }
            if (min > arr[i][j]) // For Minimum
            {
                min = arr[i][j];
            }
        }
    }

    printf("Maximum element of array is %d    \n Minimum element is array  is %d   ", max, min);

    return 0;
}