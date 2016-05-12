#include <stdio.h>

int main()

{
    int maior, menor, num, resposta;
    
    maior=-9999; menor=1000;
    
    do {
    
        printf("Entre com um numero de [0-200]:\n");
        scanf("%d", &num);
        
        if(num>maior)
        {
            maior=num;
            
        }
        if(num<menor)
        {
            menor=num;
            
        }
      printf("Deseja Continuar? 1/s 2/n\n"); 
      scanf("%d", &resposta);
    }
    while(resposta==1);
    
    printf("Maior numero = %d\n", maior);
    printf("Menor numero = %d\n", menor);
    
    return 0; 
    
}