#include <stdio.h>
// factorial finction starts 
int fact(int e)
{

    if (e == 1 || e == 0)
    {
        return 1;
    }
    return e * fact(e - 1);
}

//  Combination sunctions starts 
int ncr(int n, int r)
{

    int c = fact(n) / (fact(r) * fact(n - r));
    return c;
}
int main()
{

    int n, r;
    printf("Enter the  value  of N ");
    scanf("%d", &n);
    printf("Enter the value of R ");
    scanf("%d", &r);
    printf("The value of nCr is %d ", ncr(n, r));

    return 0;
}
