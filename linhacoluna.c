#include <stdio.h>
#include <string.h>

int main()
  
{
   float nota[4][3];
    int i, j;
  
  for(i=0; i<=3; i++)
  {
    for(j=0; j<=2; j++)
    {
    printf("Entre com a av%d do aluno %d\n", j+1, i+1);
    scanf("%f", &nota[i][j]);
     }
  
  }
  
  printf("\nResultado do semestre");
  printf("\n------------------------");
  printf("\nNome\t\tAV1\tAV2\tAV3");
  
  for(i=0; i<=3; i++)
  {
   
      printf("\nAluno%d\t\t[%.2f]\t[%.2f]\t[%.2f]\t\n", i+1, nota[i][0], nota[i][1],nota[i][2]);
      
   }
  
  printf("\nNotas da AV1\n");
  printf("\n---------------------\n");
  
  for(i=0; i<=3; i++)
  {
   
      printf("\nAluno%d\t\t[%.2f]\n", i+1, nota[i][0]);
      
   }
 
  
  return 0;
}