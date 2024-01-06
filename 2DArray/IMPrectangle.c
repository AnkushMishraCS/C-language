// Given a matrix "a" of dimension n*m and 2 coordinates (r1,c1)and (r2,c2) return the sum of the retangle from (l1,r1) to (l2,r2).

#include <stdio.h>
int main()
//   1  2  3  4  5
 //  6  7  8  9  10
//   11 12 13 14 15
//   16 17 18 19 20
 
 
{
    int arr[4][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10,11,12,13,14,15,16,17,18,19,20 };
    int c1, c2, r1, r2;

    printf("Enter the value of R1 ");
    scanf("%d", &r1);
    printf("Enter the   value of C1 ");
    scanf("%d", &c1);

    printf("Enter the  value of R2 ");
    scanf("%d", &r2);
    printf("Enter the   value of C2 ");
    scanf("%d", &c2);

 
   int sum =0;

    for (int i = r1; i<=r2 ; i++)
    {
        for (int j = c1; j <=c2; j++)
        {
       sum=sum+arr[i][j];

        }
    }
printf("Sum is %d",sum);
    return 0;
}