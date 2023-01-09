#include<stdio.h>
int fact(int *p)
{
    int i,c=1;
    for(i=*p;i>=1;i--)
    c*=i;
    return c;
}
int main()
{
    int n;
    printf("enter the number=\n");
    scanf("%d",&n);
    printf("%d",fact(&n));

return 0;}