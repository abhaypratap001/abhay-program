#include<stdio.h>
int main()
{
    int n,i,j,e,p,t;
    printf("enter the size =\n");
    scanf("%d",&n);int a[100];
    printf("enter the element=\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter total number of elemet you wana insert=\n");
    scanf("%d",&t);
    printf("enter the elements and its index=\n");
    for(j=0;j<t;j++)
    {
scanf("%d%d",&e,&p);
for(i=n+t-1;i>=p;i--)
{
    a[i+1]=a[i];
}a[p]=e;}
for(i=0;i<n+t;i++)
printf("%d,",a[i]);
return 0;
}