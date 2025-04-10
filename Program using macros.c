/******************************************************************************

   Program using macros

*******************************************************************************/

#include <stdio.h>
#define change(x)(x*x)

int main()
{
    int x=2,y=3;
    
    printf("%d \n %d",change(x),change(y));

    return 0;
}