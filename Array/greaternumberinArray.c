// Count the number of elements in array greater than a given number x.
#include<stdio.h>
int main(){
    int counter =0 , num;
printf("Enter the number of Elements in Array ");
scanf("%d",&num);
int arr[num];
for (int  i = 0; i <num; i++)
{
    printf("Enter the value of Element  %d  ",i+1);
    scanf("%d",&arr[i]);
}
int check;
printf("Enter the number  for which you want to check ");
scanf("%d",&check);
for (int  i = 0; i < num; i++)
{ 
    if (arr[i]>check)
    {
        counter ++;
    }
    
}

printf("Number of elements greater is %d",counter);







    return 0;
}