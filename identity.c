#include<stdio.h>
int main()
{
    int n,m,i,j,c=1;
    printf("enter the rows and columns=\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("enter the elements=\n");
    for(i=0;i<m;i++)for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<m;i++){for(j=0;j<n;j++)
        {if(i!=j)if(a[i][j]!=0)c=0;break;
        
        if(i==j)if(a[i][j]!=1)c=0;break;}}
        if(c==1)printf("yes it is identity matrix");
        if(c==0)printf("No! it is not an identity matrix %d",c);    return 0;}