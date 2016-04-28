#include <stdio.h>

int main()
{
    //Declaração de variaveis
    int num1, num2, som, sub, mult;
    float divi;
    // ler dois numeros inteiros
    printf("\n Entre com num1: ");
    scanf("%d", &num1);
    
    printf("\n Entre com num2: ");
    scanf("%d", &num2);
    
    //Calcular numeros inteiros
    som = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    divi = num1 / num2;
    
    //Imprimir resultado
    printf("\nsoma = %d", som);
    printf("\nSubtração = %d", sub);
    printf("\nMultiplicação = %d", mult);
    printf("\nDivisão = %f", divi);
    
    return 0;
}