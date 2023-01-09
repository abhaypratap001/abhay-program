#include<stdio.h>
int main()
{
    int i,n,b=0,s=0,a=0,m;
    printf("enter the number of people and their respective age=\n");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%d",&n);
        if(n>=0&&n<=5)b++;
        if(n>=6&&n<=17)s++;
        if(n>=18)a++;
    }
    printf("number of babies=%d\n",b);
    printf("number of school childrens=%d\n",s);
    printf("number of adults=%d\n",a);
return 0;}