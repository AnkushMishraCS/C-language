#include<stdio.h>
int main(){
    int a,b,c,d;
 printf("Enter the value  of A ");
 scanf("%d",&a);

printf("Enter the value  of B ");
scanf("%d",&b);

printf("Enter the value  of C ");
scanf("%d",&c);

printf("Enter the value  of D ");
scanf("%d",&d);

if(a>b&&a>c&&a>d){
    printf("A is greatest number among all");
}
else if (b>a&&b>c&&b>d){
    printf("b is greatest number among all");

}
else if (c>a&&c>b&&c>d){printf("C is greatest number among all");
}
else if (d>a&&b>b&&d>c){
    printf("D  is greatest number among all");
}

 












    return 0;
}