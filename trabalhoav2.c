
    #include <stdio.h>

/*Olá, meu nome é Guilherme Sabino e este programa pode ser visto no seguinte endereço do github: https://github.com/GuiSampaio/git-prog1-noite-2016/blob/master/trabalhoav2.c

*/

int main()

{
    char nome[30][15];
    
    float notas[30], 
    auxf;
    
    int opcao, 
    i, 
    j, 
    auxi, 
    n_aluno[30];
    
    

for(i=0;i<=29;i++)

{

        printf("Entre com nome do aluno %d: ", i+1);
        
        scanf("%s", nome[i]);
        
        printf("Entre com a nota do %s : ", nome[i]);
        
        scanf("%f", &notas[i]);
        
        n_aluno[i] = i;
        
        }

    do

{

opcao = 0;

    for(i=0;i<=29;i++) 

{ 

        if (notas[i] < notas[i + 1])

   {

                        opcao = 1;
                        
                        auxf = notas[i + 1];
                        
                        notas[i + 1] = notas[i];
                        
                        notas[i] = auxf;
                        
                        auxi = n_aluno[i];
                        
                        n_aluno[i] = n_aluno[i + 1];
                        
                        n_aluno[i + 1] = auxi;

       
       }

}


}
while (opcao == 1);



printf("Lista AV1\n");

printf("----------------------------\n");

printf("Nome do aluno\tNota\n");

for (i=0;i<=29;i++)

printf("%s\t\t\t %2.f\n", nome[n_aluno[i]], notas[i]);



return 0;
}
    
