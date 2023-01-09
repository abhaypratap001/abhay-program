#include<Stdio.h>
int main()
{
    int a,b;
    printf("enter two number=\n");
    scanf("%d%d",&a,&b);
    printf("%d + %d=%d\n",a,b,a+b);
    printf("%d - %d=%d\n",a,b,a-b);
    printf("%d * %d=%d\n",a,b,a*b);
    printf("%d / %d=%d\n",a,b,a/b);
    printf("%d %% %d=%d\n",a,b,a%b);
    printf("%d+%d/2=%d",a,b,a+b/2);
    return 0;
}