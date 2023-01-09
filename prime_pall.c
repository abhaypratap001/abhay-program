#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)if(n%i==0)c++;
    if(c==2)return 1;
    else return 0;
}
int pall(int n)
{
    int i,b=0,e=n;
for(;n!=0;)
{
    b=b*10+(n%10);n/=10;
}if(b==e)return 1;
else return 0;
}
int main()
{
    int a,i;
    printf("enter the number=\n");
    scanf("%d",&a);
    for(i=a;;i++)
    {
        if(prime(i))if(pall(i)){
            break;
        }
    }printf("%d",i);
    return 0;
}