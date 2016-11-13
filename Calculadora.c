#include <stdio.h>

int main()
  
{
  int opc, num1, num2, resp;
  
    do{
    //Imprime Menu
  printf("\nQual operacao deseja?\n \n1 - adc\n \n2 - subtr\n \n3 - mult\n \n4 - dvs\n:");
  scanf("%d", &opc);
  //ler num1 num2
  printf("\nAgora digite o num1:\n");
  scanf("%d", &num1);
  
  printf("\nAgora digite o num2:\n");
  scanf("%d", &num2);
  

  switch(opc)//operações matematicas
  {
    case 1:
      printf("\nresultado = %d\n ", num1+num2);
      break;
      
      case 2:
      printf("\nresultado = %d\n ", num1-num2);
      break;
      
      case 3:
      printf("\nresultado = %d\n ", num1*num2);
      break;
      
      case 4:
      printf("\nresultado = %f\n ", (float) num1/num2);
      break;
      
      
      } //Opção para continuar ou não
  printf("Deseja continuar? 1/s 2:/n");
      scanf("%d", &resp);
  
}while(resp==1);
  
  return 0;
 }