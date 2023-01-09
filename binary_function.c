#include<stdio.h>
int binarry(int n)
{
    int c=0,i,a[32];
    for(i=0;i<32;i++)
    {a[i]=n%2;
n/=2;
    }
    for(i=i-1;i>=0;i--)
    c=c*10+a[i];
    return c
;}
int hamming(int n,int m)
{
    int c=0;
    for(;n!=0&&m!=0;)
    {
        if(n%10!=m%10)c++;
        n/=10;m/=10;
    }return c;
}
int main()
{int n,m;
printf("enter the numbers=\n");
scanf("%d%d",&n,&m);
printf("%d",hamming(binarry(m),binarry(n)));
return 0;
}