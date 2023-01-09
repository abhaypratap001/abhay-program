#include<stdio.h>
int main()
/*{
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
    printf("\n");}return 0;
}*/

/*{
    int i,j,n;
    printf("enter the number of rows=\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n;j++)
        {if(i==1){printf("*");continue;}
            if(j==i||j==n)printf("* ");
            if(j<i)printf(" ");
            else printf("  ");
        }
    printf("\n");}return 0;
}*/

{
    int i,j,n;
    printf("enter the number of rows=\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=i)printf(" *");
            else printf(" ");
        }
    printf("\n");}return 0;
}