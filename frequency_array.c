#include<stdio.h>
int main()
{int n,c=0,e,i;
printf("enter the size=\n");
scanf("%d",&n);int a[n];
for(i=0;i<n;i++)scanf("%d",&a[i]);
printf("enter the no.=");scanf("%d",&e);
for(i=0;i<n;i++)
{if(a[i]==e)c++;
}if(c!=0)
printf("frequency is=%d",c);
else if(c==0)printf("element does not exist");
return 0;
}