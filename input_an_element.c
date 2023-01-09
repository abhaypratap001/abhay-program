#include<stdio.h>
int main()
{
    int n,i,j,e,p;
    printf("enter the size =\n");
    scanf("%d",&n);int a[n+1];
    printf("enter the element=\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the element and its index=\n");
scanf("%d%d",&e,&p);
for(i=n-1;i>=p;i--)
{
    a[i+1]=a[i];
}a[p]=e;
for(i=0;i<=n;i++)
printf("%d,",a[i]);
return 0;
}