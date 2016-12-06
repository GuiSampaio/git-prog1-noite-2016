/*
Guilherme Sampaio 
Matricula: 0050014286
*/



#include<stdio.h>
int main()
{
int matA[2][3], matB[3][2],matR[2][2], i, j;
  
  
//recebe a matriz A
printf("MATRIZ A\n\n");
for (i=0;i<=1;i++)
{
for(j=0;j<=2;j++)
{
printf("A[%d][%d]: ",i+1,j+1);
scanf("%d",&matA[i][j]);
}
}
//recebe a matriz B
printf("\nMATRIZ B\n\n");
for (i=0;i<=2;i++)
{
for(j=0;j<=1;j++)
{
printf("B[%d][%d]: ",i+1,j+1);
scanf("%d",&matB[i][j]);
}
}
//multiplicação
for (i=0;i<=1;i++) //muda as linhas de A
{
for(j=0;j<=1;j++) //muda as colunas de B
{
matR[i][j] = (matA[i][j] * matB[i][j]) + (matA[i][j] * matB[i][j]) ; 
}
}
//matriz resultante
printf("\nMatriz C\n");
printf("\n");
for (i=0;i<=1;i++)
{
for (j=0;j<=1;j++)
printf("%d ",matR[i][j]);
printf("\n");
}

  
  
  return 0;
}