#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the number of rows=\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i)printf("* ");
            else printf(" ");
        }
    printf("\n");}
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i)printf("* ");
            else printf(" ");
        }
    printf("\n");}
    return 0;
}