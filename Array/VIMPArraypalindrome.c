// Write a program  to check whether Array is Palindrome or not.
// This Question is solved using 2 Methods   , 2 Method is good  1 method is also not bad.

#include<stdio.h>
 int main(){
 int n;
    printf("Enter the number of  Elements in Array \n");
 scanf("%d",&n);
 int arr[n];
 int brr[n];
 for (int  i = 0; i <n; i++)
 {
    printf("Enter the value of %d\n",i+1);
    scanf("%d",&arr[i]);
 }
 
  
  for (int i = 0; i <n; i++)
  {
    brr[i]=arr[n-i-1];
   
  }
   int palindrome=0;

for (int j = 0;j < n; j++)
{
    
    if (brr[j]==arr[j])
   {
      palindrome++;
   }
     }

    if (palindrome==n)
    { 
    printf("Yes");
    }
     else
      printf("No");


    return 0;
}


// Method 2


#include<stdio.h>
int main() {
 int n;
    printf("Enter the number of  Elements in Array \n");
 scanf("%d",&n);
 int arr[n];
 

 for (int  i = 0; i <n; i++)
 {
    printf("Enter the value of %d\n",i+1);
    scanf("%d",&arr[i]);
 }
    

    int palindrome = 0;

 
    for (int i = 0, j = n-1; i < j; i++, j--) {
        if (arr[i] == arr[j]) {
            palindrome++;
        
        }
    }
 
 int  c= n/2; //half element will be equal to another half elements 
 
    if (palindrome ==c) {
        printf("Yes, it is a Palindrome\n");
    } else {
        printf("No, it is not a palindrome\n");
    }

    return 0;
}
 