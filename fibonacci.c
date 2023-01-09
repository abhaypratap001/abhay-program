#include<stdio.h>
int main()
{
    int a,b=0,c=-1,d=1;
    printf("enter the limit of series=\n");
    scanf("%d",&a);
    for(;b<a;)
{
    b=c+d;printf("%d,",b);
    c=d;d=b;
}return 0;
}