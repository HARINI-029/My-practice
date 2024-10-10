/**************************************************************
 *Write a program to check whether a character is a vowel or not.
 * *************************************************************/ 
 #include<stdio.h>
 void main()
 {
     char ch;
     printf("enter a character \n");
     scanf("%c",&ch);
     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'
     ||ch=='O'||ch=='U')
     {
         printf("it is a vowel\n");
     }
     else
     {
         printf("not a vowel");
     }
 }