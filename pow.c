#include<stdio.h>
#include<math.h>
int main()
{
    int a,n;long int c;
    printf("enter the number and it`s power=\n");
    scanf("%d%d",&a,&n);
    printf("%d^%d=%ld",a,n,c=pow(a,n));
    return 0;
}