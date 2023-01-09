#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t;
    printf("enter p,r,t\n");
    scanf("%f%f%f",&p,&r,&t);
    printf("simple interest=%g*%g*%g/100=%g\n",p,r,t,p*r*t/100);
    printf("compound interst=%g(1+%g/100)^%g=%g",p,r,t,p*pow((1+r/100),t));
    return 0;
}