#include <stdio.h>
int main() {int a,b,sum=0;
printf("enter the number=\n");
scanf("%d",&a);
            for(;a!=0;)
            {b=a%10;a/=10;sum+=b;if(a==0&&sum>=10){a=sum;sum=0;}}printf("%d",sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}