#include<stdio.h>
#include<math.h>
int main()
{
    int r2,r1,i,t;
     int  p=0,b=0,e;
    printf("enter the range=\n");
    scanf("%d%d",&r1,&r2);
    for(i=r1+1;i<r2;i++)
    {
      e=i;t=e;
        for(;t!=0;)
        {
            t/=10;p++;
        }t=e;
        for(;t!=0;)
        {
            b=b+pow(t%10,p);t/=10;
        }if(b==e)printf("%d,",b);b=0;p=0;
    }return 0;
}