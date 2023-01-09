#include<stdio.h>
int fact(int n)
{
    int i,c=1;
    for(i=n;i>=1;i--)
    c*=i;
    return c;
}
int main()
{
    int n;
    printf("enter the number=\n");
    scanf("%d",&n);
    printf("factorial of %d=%d",n,fact(n));
    return 0;
}