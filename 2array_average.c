#include<stdio.h>
int main()
{
    int ave=0;
    int m,n,i,j;
    printf("enter the rows and columns=\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("enter the elements=\n");
    for(i=0;i<m;i++){for(j=0;j<n;j++){
    scanf("%d",&a[i][j]);ave+=a[i][j];}}
    printf("average=%d",ave=ave/(m*n));
    return 0;}