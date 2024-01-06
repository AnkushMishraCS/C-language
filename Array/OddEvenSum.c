// Find the difference between the sum of elements at even indices and odd indices.

#include<stdio.h>
int main(){

 int   num;
printf("Enter the number of Elements in Array ");
scanf("%d",&num);
int arr[num];
for (int  i = 0; i <num; i++)
{
    printf("Enter the value of Element  %d  ",i+1);
    scanf("%d",&arr[i]);
}
int sumodd=0,sumeven=0;
for (int i = 0; i <num; i++)
{
    if (i%2==0)
    sumeven+=arr[i];
     else
          sumodd+=arr[i];
         
    
}
printf("sum of even =%d\n",sumeven);
 
printf("Sum odd is %d \n",sumodd);
int sum;
if (sumodd>sumeven){
sum=  sumodd-sumeven;
}
else
{
    sum= sumeven-sumodd;
}

printf("Difference between sum of odd and even indices is %d",sum);








    return 0;
}