#include<stdio.h>
int main() {int a,b,c,e;
printf("enter the number=\n");
scanf("%d",&a);e=a;
            for(;a!=0;)
            {b=a%10;a/=10;c=c*10+b;}
            if(c==e)printf("Palindrome.");
            else printf("Not Palindrome.%d",b);
    return 0;
}