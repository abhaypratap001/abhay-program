#include<stdio.h>
int main()
{
    float cp,sp,mp;
    scanf("%f%f%f",&cp,&sp,&mp);
    if(sp>=(cp+mp))printf("profit %%%f/n",((sp-cp-mp)/cp)*100);
    else printf("profit %%%f/n",((sp-cp-mp)/cp)*100);
return 0;
}