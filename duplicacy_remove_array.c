#include<stdio.h>
int main()
{
    int n,i,j,e,t=0;
    printf("enter the size =\n");
    scanf("%d",&n);int a[100];
    printf("enter the element=\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
 printf("enter the element you wana delet=\n");
scanf("%d",&e);
for(i=0;i<n;i++)
{
    if(a[i]==e){
        for(j=i;j<n;j++)
        a[j]=a[j+1];t++;}
        }
for(i=0;i<n-t;i++)
printf("%d,",a[i]);
return 0;
}