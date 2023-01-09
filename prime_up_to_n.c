#include <stdio.h>
int main() {int a,i,j;
printf("enter the limit=\n");
scanf("%d",&a);
            for(i=2;i<=a;i++)
            {   int b=0;
                for(j=2;j<i;j++)
                {
                    if(i%j==0)
                    {b++;}}
                if(b==0)printf("%d,",i);}
            
                

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
