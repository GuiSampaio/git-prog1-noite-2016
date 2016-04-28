#include <stdio.h>

int main ()
{
    float Nota1, Nota2;
    float media;
    
    printf("\nInforme sua nota\n");
    scanf("%f", &Nota1);
    printf("\nInforme sua nota\n");
    scanf("%f", &Nota2);

   media = ( Nota1+Nota2)/2;

    if ( media <=5.0 )
    {
    printf("\nReprovado\n");
    
    }
    
    else if ( media < 7 )
   
    {
        printf("\nRecuperacao\n");
        
    }
   
    else
    
    {
        printf("\nAprovado\n");
        
    }
    
    return 0;
}

