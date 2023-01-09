#include<stdio.h>
int shortar(int* p,int *q)
{int i,j;
 for(i=0;i<*q-1;i++)
    {
        for(j=0;j<*q-i-1;j++)
        {
            if(*(p+j)>*(p+j+1)){
                int c=*(p+j);
                *(p+j)=*(p+j+1);*(p+j+1)=c;
            }
        }
    }
return 0;}
int array(int a[],int* n)
{
    int i;
    for(i=0;i<*n;i++)
    scanf("%d",&a[i]);
    return 0;
}
int main()
{
    int n,i;printf("enter the size=\n");
    scanf("%d",&n);int a[n];
    printf("enter the elements=\n");
    array(a,&n);
    shortar(a,&n);
    printf("updated aray is=\n");
   for(i=0;i<n;i++)
    printf("%d,",a[i]);
    return 0;
}