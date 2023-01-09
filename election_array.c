#include<stdio.h>
int main()
{int i,j,c=0,d=0;
int a[2];
for(j=1;j<=10;j++)
{
for(i=0;i<2;i++)
{scanf("%d",&a[i]);}
if(a[0]>a[1])c++;
else d++;}
printf("total no. of states win by trump are=%d\ntotal no. of states win by biden are=%d",c,d);
printf("\noverall win is=");
if(c>d)printf("Trump");
else printf("Biden");
return 0;}