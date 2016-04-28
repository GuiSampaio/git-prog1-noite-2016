#include <stdio.h> 

int main ()

{
     //declara as variaveis 
     int idade;
     
     //ler do teclado 
     
     printf("\nEntre com uma idade:" );
     scanf("%d", &idade);
     
     if(idade<16)
     {
         
         printf("\nVoce nao pode votar\n");
         
     }
     
     else if ( idade ==16 || idade == 17 || idade > 70 )
    
     {
       printf("\n voto FACULTATIVO\n");
       
     }
      else 
      {
          printf("\n Voto Obrigatorio!!!!\n");
          
      }
      
     return 0;
}