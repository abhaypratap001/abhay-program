#include<stdio.h>
int main()
{
    int a,b,i,c=0;
    printf("enter the number & it`s multiplant=\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    c+=a;
    printf("result=%d",c);
    return 0;
}