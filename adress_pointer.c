#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int *p,**q;
    p=&a;q=&p;
    printf("%d %d",p,**q);
    printf("\n%d %d",&a,&p);
    return 0;
}