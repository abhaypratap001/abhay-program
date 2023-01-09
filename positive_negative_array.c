#include<stdio.h>
int main()
{
    int n,i,N=0,z=0,p=0;
    printf("enter the size of array=\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements in it=\n");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
if(a[i]>0)p++;
if(a[i]==0)z++;
if(a[i]<0)N++;}
printf("total positive=%d\n",p);
printf("total zero=%d\n",z);
printf("total negative=%d\n",N);
return 0;
}