#include<stdio.h>
int main()
{
    int n,i,c=1;
    printf("enter the number=\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    c*=i;
   if(n>=0) printf("factorial is =%d",c);
    else printf("factorial is not possible");
    return 0;
}