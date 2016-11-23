#include <stdio.h>
#include <string.h>

int main()
  
{
  
  char nome[20];
  int i, tam;
  
  
    printf("\nQual seu nome?:\n");
    scanf("%s", nome);
  
  tam = strlen(nome);
    
  printf("\nNome inverso\n");
 
  for(i=tam-1; i>=0; i--)
  {
    
   
    printf("%c\n", nome[i]);
    
  }
  

  
  return 0;
}