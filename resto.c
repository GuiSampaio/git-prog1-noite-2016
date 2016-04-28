#include <stdio.h>

int main()
{
    int num, resto;
    
    printf("\n Digite o numero  ");
    scanf("%d", &num);
    
    resto = num % 2;
    
    if (resto == 1)
    { 
        printf("\n Este numero é impar");

    }    
    else
    {
        
        printf("\n Este numero é par");
        
    }
    
        
        return 0;
        
}