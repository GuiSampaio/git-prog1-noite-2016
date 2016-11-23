#include <stdio.h>
#include <string.h>

int main()
  
{
  
  char palavra[20];
  int i, tam;
  
  
    printf("\nQual seu nome?:\n");
    scanf("%s", palavra);
  
  tam = strlen(palavra);
    
  printf("\nNome inverso\n");
 
  for(i=0; i<=tam; i++)
  {
    
   
    printf("%c\n", palavra[i]-32);
    
  }

  
  return 0;
}

  
  