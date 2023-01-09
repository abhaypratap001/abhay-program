#include<stdio.h>
#include<math.h>
int pall(int);
int arm(int);
int prime(int);
int main()
{int n,i,j;
printf("enter the size of array=\n");
scanf("%d",&n);int a[n];
printf("enter the elements=\n");
for(i=0;i<n;i++)scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(prime(a[i]))

{for(j=a[i]+1;;j++)
if(arm(j)){
a[i]=j;break;
}}

else for(j=a[i]+1;;j++)
if(pall(j)){
a[i]=j;break;
}}printf("updated array is=\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
return 0;}

int prime(int n)
{int c=0,i;
for(i=1;i<=n;i++)
if(n%i==0)c++;
if(c==2)return 1;
else return 0;
}

int pall(int n)
{int b=0,a=n,i;
for(;a!=0;)
{b=b*10+a%10;a/=10;}
if(b==n)return 1;
else return 0;}

int arm(int n)
{int i,b=0,c=0,a=n;
for(;a!=0;)
{a/=10;c++;}a=n;
for(;a!=0;)
{b=b+pow(a%10,c);a/=10;}
if(b==n)return 1;
else return 0;}