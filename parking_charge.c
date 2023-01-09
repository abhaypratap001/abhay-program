#include<stdio.h>
int main()
{
    char v;
    int charge=0,t;
    printf("enter the vehecile type and time of parking=\n");
    scanf("%c",&v);
    scanf("%d",&t);
    if('v'=='c')charge=t*10;
    if('v'=='t')charge=t*20;
    if('v'=='s')charge=t*5;
    printf("total charge is=%d",charge);
    return 0;
}