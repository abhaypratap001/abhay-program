#include<stdio.h>
int main()
{
    char ch;
    printf("enter the char=\n");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)printf("%c is upper case char",ch);
    if(ch>=97&&ch<=122)printf("%c is lower case char",ch);
if(ch>=32&&ch<=47||ch>=58&&ch<=63)printf("%c is special char",ch);
if(ch>=48&&ch<=57)printf("%c is number",ch);
return 0;
}