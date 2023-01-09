#include<stdio.h>
int fact(int n)
{
    int
 i,c=1;
    for(i=n;i>=1;i--)
    c*=i;
    return c;
}
int ans(int n,int r,int R)
{
    int
 a;
    a=n/(r*R);
    printf("binomial=%d",n/(r*R));
    return 0;
}
int main()
{
    int
 n,r;
    printf("enter the n,r=\n");
scanf("%d%d",&n,&r);
ans(fact(n),fact(n-r),fact(r));
return 0;
}