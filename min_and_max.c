#include <math.h>
#include <stdio.h>
int main() {int n,max,min,t,a;
printf("enter total number of test cases=\n");
            scanf("%d",&t);
            for(int i=1;i<=t;i++)
            {printf("enter toal number of inputs and the values respectelly=\n");
                scanf("%d%d",&n,&a);min=a;max=a;
            for(int j=1;j<n;j++)
            {scanf("%d",&a);
            if(min>=a)min=a;
            if(max<=a)max=a;}printf("Min=%d Max=%d",min,max);printf("\n");}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}