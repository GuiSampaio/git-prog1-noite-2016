#include <stdio.h>

int main()

{
    
    int i, multiplicar;
    
    printf("\nDigite um numero\n");
    scanf("%d", &multiplicar);
    
    
    
    for(i=1; i<=10; i++)
    
    printf(" %d x %d = %d \n", multiplicar, i, i*multiplicar);
    
    
    
    return 0;
}