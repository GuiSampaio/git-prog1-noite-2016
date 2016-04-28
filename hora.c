#include <stdio.h>

int main ()
{
    int Horas;
    
    printf("\n Informe as horas\n");
    scanf("%d", &Horas);
    
     if( Horas <12)
    
    {
        printf("\nBom dia\n");
        
    }
    
    else if (Horas < 18)
    {
        
       printf("\nBoa Tarde\n");
    
    }
    else if (Horas <24)
    {
        printf("\nBoa noite\n");
    }
    else 
    {
        printf("\n Numero invalido, tente novamente\n");
    }
    
    return 0;
}