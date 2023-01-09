#include<stdio.h>
int main()
{
    int n,i,c=0,d=0;
    printf("enter the size of array=\n");
    scanf("%d",&n);
    int a[n],e[n],o[n];
    printf("enter the elements in it=\n");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
if(a[i]%2==0){e[c]=a[i];c++;}
if(a[i]%2==1){o[d]=a[i];d++;}
}
printf("even=");
for(i=0;i<c;i++)
printf("%d,",e[i]);

printf("\nodd=");
for(i=0;i<d;i++)
printf("%d,",o[i]);
return 0;
}