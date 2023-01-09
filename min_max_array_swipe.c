#include<stdio.h>
int main()
{int n,i,M,m;
printf("enter the size=\n");
scanf("%d",&n);int a[n];
printf("enter the elements in it=\n");
scanf("%d",&a[0]);int max=a[0],min=a[0];
for(i=1;i<n;i++)
{scanf("%d",&a[i]);
if(a[i]>max)max=a[i],M=i;
if(a[i]<min)min=a[i],m=i;
}printf("max=%d\nmin=%d\n",max,min);
a[M]=min;a[m]=max;
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;}