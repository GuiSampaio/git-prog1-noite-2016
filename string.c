#include <stdio.h>

int main()
  
{
  char aluno[50];
  float  av1, av2, media;
  
  printf("\nQual seu nome?\n");
  scanf("%s", aluno);
  
  printf("\nQual sua nota da AV1?\n");
  scanf("%f",&av1);
  
  printf("\nQual sua nota da AV2?\n");
  scanf("%f",&av2);
  
 media = av1+av2;
  
  printf("\nOla %s sua media e %f\n", aluno, media/2);
  
  
  
  return 0;
}