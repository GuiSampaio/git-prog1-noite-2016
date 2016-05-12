#include <stdio.h>

int main()

{
    float av1, av2, media;
    char nome [20];
    
    printf("\nQual seu nome?");
    scanf("%s", nome);
    printf("Entre com AV1:");
    scanf("%f", &av1);
    printf("Entre com AV2:");
    scanf("%f", &av2);
    
    media=(av1+av2)/2;
    
    printf("\nOla %s, sua media = %2.f", nome, media);
    
    
  
    
    return 0;
}