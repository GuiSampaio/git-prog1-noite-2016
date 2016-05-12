#include <stdio.h>
        
       int main()
        
       {
            int i, qtdMaior;
            float av1[10], media, somaAv1=0;
            float maior=-999;
            
            for(i=0; i<=9;i++)
            {
                
                printf("\nEntre com a av1 do aluno %d:", i+1);
                scanf("%f", &av1[i]);
                somaAv1= somaAv1+av1[i];
                
                if(av1[i] > maior )
                {
                    
                   maior = av1[i];
                    
                }
                
                
             }
            
            media = somaAv1/i;
            
            printf("A media da turma é %.2f\n", media);
            
            //descobrir nota acima da media
            
            
            for(i=0; i<=9; i++)
            {
                if(av1[i]>=media)
                
                printf("Sua nota está acima da media da turma - %.2f\n", av1[i]);
                
                if(av1[i] == maior)
                
                {
                    
                    qtdMaior++;
                
                }
                
                
            }
            
          printf("\n %d Alunos tiraram a maior nota que foi %.2f", qtdMaior, maior);
          
          
          
          
            return 0;
        }