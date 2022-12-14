#include <math.h>
#include <stdio.h>
#include <conio.h>

float A[100][100],B[100][100],C[100][100];
int l,c,i,j;
void main()
{
     printf("nbr ligne="); scanf("%d",&l);
     printf("nbr colonne="); scanf("%d",&c);
     for(i=0;i<l;i=i+1)
     {
         for(j=0;j<c;j=j+1)
         {
              printf("A[%d][%d]=",i,j);
              scanf("%f",&A[i][j]);
         }
     }
     i=0;
     while(i<l)
     {
         j=0\;
         while(j<c)
         {
              C[i][j]=A[i][j]+B[i][j];
              printf("C[%d][%d]=%3.2f\n",i,j,C[i][j]);
              j=j+1;
         }
         i=i+1;
     }
getch();
}
