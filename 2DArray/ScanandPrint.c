// How to print the elements.

#include <Stdio.h>
int main()
{
    int r, c;
    printf("Enter number of rows ");
    scanf("%d", &r);
    printf("Enter the number of columns ");
    scanf("%d", &c);
    int arr[r][c];
    // scanning start
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        { 
            scanf("%d",&arr[i][j]);
        }
    }
    // printing start
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}