/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<stdio.h>
void input(int* n,int a[])
{
    printf("Enter the size of array\n");
    scanf("%d",n);
    printf("Enter the array elements\n");
    for(int i=0;i<*n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int bubble(int n, int a[])
{
    int i,j;
    for(i=0;i<n - 1;i++ )
    {
        for(j=0;j<n -i - 1;j++)
        {
            if(a[j]>a[j+ 1])
            {
                int temp=a[j];
                a[j]=a[j + 1];
                a[j + 1]=temp;
            }
            }
        }
    }

int output(int n, int a[])
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
    
    
}
int main()
{
    int n;
    int a[100];
    input(&n,a);
    bubble(n,a);
    output(n,a);
}
