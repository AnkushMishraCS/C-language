// Print Pascal triangle  in equilateral triangle  form  using combination and permutation values .

// pascal triangle using Combination 

#include <stdio.h>
int fact(int a)
{

    if (a == 0 || a == 1)
    {

        return 1;
    }

    return a * fact(a - 1);
}

int combination(int n, int r)
{

    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
int lines ;
printf("How many lines  you want in your Pascal triangle ? ");
    scanf("%d",&lines);
    int combination();

    for (int n = 0; n <lines; n++)
    {
        for (int i = 0; i < lines - n-1; i++)
        {
            printf(" ");
        }

        for (int c = 0; c <= n; c++)
        {
            printf("%d ", combination(n, c));
        }

        printf("\n");
    }

    return 0;
}


// pascal triangle using Permutation values .

#include<stdio.h>
    int fact (int a){

        if (a==0||a==1)
        {
            return 1;
        }
 return a*fact(a-1);
            }
            int permutation (int n,int r ){
  
            int c= fact(n)/fact(n-r) ;  
return c ;
            }
int main(){

 
 
  
        // pascal triangle using permutation values 
         for (int  i = 0; i <6; i++)
         {
            for (int x = 0; x < 5-i; x++)
            {
                printf(" ");
            }
            
for (int  j = 0; j< i; j++)
{
    printf("%d ",permutation(i,j));
}

        printf("\n"); }
          




    return 0;
}