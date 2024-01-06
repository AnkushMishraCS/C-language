// find  the second largest element in an Array .   
// Good Method
#include <stdio.h>
#include <limits.h>

int main()
{
   int max = INT_MIN;
   int secondmax = INT_MIN;
   int n;
   printf("Enter the number of elements in an Array ");
   scanf("%d", &n);

   int arr[n];
   for (int i = 0; i < n; i++)
   {
      printf("Enter the value of Element %d  ", i + 1);
      scanf("%d", &arr[i]);
   }

   for (int i = 0; i < n; i++)
   {  //1,2,4,3,4,2,1

      if (max < arr[i])
      {
         secondmax = max; // previous max is secondmax;
         max = arr[i];    // This is present max.
      }

      else if (secondmax < arr[i] && secondmax != max)
      {
         secondmax = arr[i];
         // this will run only when max is greater then arr[i].suppose kisi array me  max number starting me hi aa jata hai to second max ke liye to puri array me search karna pdega  thats why we made  else if  equation.
      }
   }

   printf("Largest number  is %d\n", max);

   printf("Second Largest number is %d ", secondmax);

   return 0;
}

// bad way

// why this is bad because agar ham order ko change kar denge to answer bhee galat aajaega.
#include <stdio.h>
#include <limits.h>
int main()
{
   int arr[5] = {1, 2, 3, 4, 5, 6};
   int max = INT_MIN;
   int secondmax = arr[0];
   for (int i = 0; i < 5; i++)
   {
      if (max < arr[i])
      {

         max = arr[i];
      }
   }

   for (int j = 0; j < 5; j++)
   {
      if (max != arr[j] && secondmax < arr[j])
      {
         secondmax = arr[j];
      }
   }

   printf("Second max =%d\n", secondmax);
   printf("max is= %d", max);

   return 0;
}