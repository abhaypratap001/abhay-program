#include<stdio.h>
int main()
{int SIZE;
printf("enter the size=\n");
scanf("%d",&SIZE);
int A[SIZE][SIZE];
int B[SIZE][SIZE];
int C[SIZE][SIZE];   
int r, c, i, sum;
printf("Enter elements in matrix A of size %dx%d: \n", SIZE, SIZE);
for(r=0; r<SIZE; r++)
{for(c=0; c<SIZE; c++)
{scanf("%d", &A[r][c]);}}
printf("\nEnter elements in matrix B of size %dx%d: \n", SIZE, SIZE);
for(r=0;r<SIZE;r++)
{for(c=0; c<SIZE; c++)
{scanf("%d", &B[r][c]);}}
for(r=0;r<SIZE;r++)
{for(c=0;c<SIZE;c++)
{sum=0;
for(i=0; i<SIZE; i++){sum+=A[r][i]*B[i][c];
}C[r][c]=sum;
}}printf("\nProduct of matrix A * B = \n");
for(r=0; r<SIZE; r++)
{for(c=0; c<SIZE; c++)
{printf("%d ",C[r][c]);}printf("\n");}return 0;}