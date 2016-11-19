#include <stdio.h>


int main()
  
{
   int origem=0, destino=0; 
   
   
  
  do{
    
      printf("\nOla, meu nome é Easy Travel, Qual sua Origem?\n1-Rio\n2-SP\n3-SSA\n");
      scanf("%d", &origem);
    
    if(origem==1)
    {
      
      printf("\nEntendi, Rio de Janeiro. qual é seu Destino?\n1-Rio\n2-SP\n3-SSA\n");
      scanf("%d", &destino);         
      
    }
      
    else if(origem==2)
    {
      
      printf("\nEntendi, São Paulo. qual é seu Destino?\n1-Rio\n2-SP\n3-SSA\n");
      scanf("%d", &destino);    
      
    }
     if(origem==3)
     {
       
      printf("\nEntendi, Salvador. qual é seu Destino?\n1-Rio\n2-SP\n3-SSA\n");
      scanf("%d", &destino); 
       
     }
    
    switch(origem)
    {
      case 1:
      break;
        
      case 2:
      break;
        
      case 3:
      break;
        
        
    }
    
         
    
  }while(origem>3 || origem<1);
  
   
  do{
    
    
    if(destino==origem)
    {
    printf("\nOps!! Seu destino não pode ser o mesmo que a origem. Qual é seu destino(1-Rio/2-SP/3-SSA) ?\n");
    printf("\nDigite seu destino!\n");
    scanf("%d", &destino);
    } 
    
        
     if(origem==1 && destino==2)
    {
      
      printf("\nEntendi, São Paulo\n");
      printf("\nValor da Passagem RJ --> SP = R$ 150,00 ou U$$ 44,17\n");         
      
    }
      
    else if(origem==1 && destino==3)
    {
      
      printf("\nEntendi, Salvador\n");
      printf("\nValor da Passagem RJ --> SSA = R$ 300,00 ou U$$ 88,34\n");   
      
    }
     if(origem==2 && destino==1)
     {
       
      printf("\nEntendi, Rio de Janeiro");
      printf("\nValor da Passagem SP --> RJ = R$ 160,00 ou U$$ 47,11\n"); 
       
     }
    
    if(origem==2 && destino==3)
    {
      
      printf("\nEntendi, Salvador\n");
      printf("\nValor da Passagem SP --> SSA = R$ 180,00 ou U$$ 53,00\n");         
      
    }
      
    else if(origem==3 && destino==1)
    {
      
      printf("\nEntendi, Rio de Janeiro\n");
      printf("\nValor da Passagem SSA --> RJ = R$ 280,00 ou U$$ 82,45\n");   
      
    }
     if(origem==3 && destino==2)
     {
       
      printf("\nEntendi, São Paulo");
      printf("\nValor da Passagem SSA --> SP = R$ 175,00 ou U$$ 51,53\n"); 
       
     }
        
    switch(destino)
    {
        
      case 1:
      break;
        
      case 2:
      break;
        
      case 3:
      break; 
        
       
    }
    
         
      
  }while(destino==origem);
  
  
  
  
  
  return 0;
}