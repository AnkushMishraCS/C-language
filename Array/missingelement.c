// For example : Given an array containing elements from  x to y according to USER except one element in this range is Missing.Find  the missing element .
#include<Stdio.h>
int main(){
 int n;
 printf("Enter the Elements in Array ");
 scanf("%d",&n);
 int arr[n];
 for (int  i = 0; i < n; i++)
 { 
    printf("Enter the value of %d ",i+1);
    scanf("%d",&arr[i]);
 }
 int sumofarray=0;
   for (int  i = 0; i < n; i++)
   {
      sumofarray =sumofarray+arr[i];
   }
   printf("Sum of Array is  %d  \n",sumofarray);

int sum=0;

   for (int  i = 0; i <=n; i++)
   {

   sum=sum+i;
   
   }
   printf("Real sum is %d\n",sum);
    int newsum;
   if (sum>sumofarray )
   {
     
     newsum = sum-sumofarray;
   }
   else {
      newsum = sumofarray-sum;
   }

printf("Missing Element is  %d ",newsum);

    return 0;
}