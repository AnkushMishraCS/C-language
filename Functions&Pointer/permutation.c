// find permutation of triangle 
#include<stdio.h>
int main(){
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

int n,c;
    printf("Enter the value of N ");
    scanf("%d",&n);
    printf("Enter the value of C ");
    scanf("%d",&c);
        printf("Value of Permutation is  %d ",permutation(n,c));
 
  
        



    return 0;
}