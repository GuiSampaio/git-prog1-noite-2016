#include <stdio.h>

int main()
{
  char letra;
  
  
  printf("\nEntre com uma letra ou um numero\n");
  scanf("%c", &letra);
  
  
  if( (letra>=65) && (letra<=90) )  /*Ler o Range de numeros da Tebela ASCII 
                              que representam as letras maiusculas*/ 
  {
    printf("\nLetra Maiuscula\n");
    
  }
  
  else if( (letra>=48) && (letra<=57) )
     {
    
    printf("\nE um numero!!\n");
    
      }
  
  else if((letra>=97) && (letra<=122))
  {
    printf("\nLetra minuscula\n");
  
  }
  
 
  return 0;
}