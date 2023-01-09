#include<stdio.h>
int pow(int n,int p)
{
    int i,c=1;
    for(i=1;i<=p;i++)
    c*=n;
    return c;
}
int main()
{
    int n,p;
    printf("enter the number & it`s power=\n");
    scanf("%d%d",&n,&p);
    printf("%d^%d=%d",n,p,pow(n,p));
    return 0;
}