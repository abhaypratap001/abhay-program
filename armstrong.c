#include<stdio.h>
#include<math.h>
int main()
{
    int n,p=0,e,b=0;
    printf("enter the number=\n");
    scanf("%d",&n);e=n;
    for(;n!=0;)
    {
        p++;n/=10;
    }n=e;
    for(;n!=0;)
    {
        b=b+pow(n%10,p);n/=10;
    }
    if(e==b)printf("%d is an armstrong number",e);
    else printf("%d is not an armstrong number",e);
}