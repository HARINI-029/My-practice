//This program counts the number of dash"-" present//
#include <stdio.h>
void main()
{
    char ch[10];
    int count=0;
    printf("Enter a word: ");
   
    scanf("%[^\n]", ch);

    printf("You entered: %s\n", ch);
    for(int i=0;i<10;i++)
    {
        if(ch[i]=='-')
        {
            count++;
        }
    }
    printf("%d",count);
}
