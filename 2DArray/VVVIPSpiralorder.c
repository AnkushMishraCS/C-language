// Write a program to print matrix in srpiral order.
// this is very important as well as very hard question.

#include <stdio.h>
int main()
{int r,c;

  printf("Enter the number of rows in matrix  ");
  scanf("%d", &r);
  printf("Enter the number of rows in matrix  ");
  scanf("%d", &c);

  int arr[r][c];

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("Enter the value of element %d of  row %d  ", j + 1, i + 1);
      scanf("%d", &arr[i][j]);
    }
  }
  int minr = 0;
  int minc = 0;
  int maxr = r - 1;
  int maxc = c - 1;
  int count = 0;
  int tne = r * c;
  while (count < tne)
  {
    for (int c = minc; c <= maxc && count < tne; c++)
    {
      printf("%d ", arr[minr][c]);

      count++;
    }
    minr++;
     for (int r = minr; r <= maxr && count < tne; r++)
    {
      printf("%d ", arr[r][maxc]);

      count++;
    }
    maxc--;
    for (int c = maxc; c >= minc && count < tne; c--)
    {
      printf("%d ", arr[maxr][c]);
      count++;
    }
    maxr--;
    for (int r = maxr; r >= minr && count < tne; r--)
    {
      printf("%d ", arr[r][minc]);

      count++;
    }
    minc++;
  }

  return 0;
}
