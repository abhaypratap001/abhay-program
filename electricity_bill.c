#include<stdio.h>
int main()
{
    float unit,bill;
    printf("enter the unit consumed=\n");
    scanf("%f",&unit);
    if(unit>=0&&unit<50){bill=unit/2;}
    if(unit>=50&&unit<150){bill=(50/2)+(unit-50)*0.75;}
    if(unit>=150&&unit<250){bill=(50/2)+(100*0.75)+(unit-150)*1.20;}
    if(unit>=250){bill=(50/2)+(100*0.75)+(100*1.20)+(unit-250)*1.50;}
printf("your bill is=%f", bill+bill*0.2);
return 0;
}
