/******************************************************************************

Bubble sort
*******************************************************************************/
#include <stdio.h>

int main()
{
   int a[3] = {5, 3, 1}, n = 3, i, j;
   for(i = 0; i < n - 1; i++)
   {
       for(j = 0; j < n - i - 1; j++) // Adjusted inner loop
       {
           if(a[j] > a[j + 1]) // Changed condition for descending order
           {
               int temp = a[j];
               a[j] = a[j + 1];
               a[j + 1] = temp;
           }
       }
   }
   for(i = 0; i < n; i++)
   {
       printf("%d ", a[i]); // Added space for better output readability
   }
   return 0; // Added return statement for main function
}
