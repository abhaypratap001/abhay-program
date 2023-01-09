#include<stdio.h>
int main()
{
    int n,m,i,j;
    printf("enter the rows and columns=\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("enter the elements=\n");
    for(i=0;i<m;i++)for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<m;i++){for(j=0;j<n;j++){
   if(i==0||i==m-1||j==0||j==n-1)
    printf("%d ",a[i][j]);else printf("  ");}printf("\n");}
    return 0;}