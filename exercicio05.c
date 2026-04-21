#include <stdio.h>
#include <stdlib.h>

int main(void){
    // variáveis
    int i, quantidade_alunos, quantidade_turmas;
    float media = 0;

    // entrada e processamento
    printf("Digite a quantidade de turmas: ");
        scanf("%i",&quantidade_turmas);
        fflush(stdin);

         for(int i=0;i<quantidade_turmas;i++){
        printf("Digite a quantidade de alunos na turma %d: ", i+1);
        scanf("%i",&quantidade_alunos);
        fflush(stdin);
        if (quantidade_alunos > 40){
            printf("Turmas nao podem ter mais de 40 alunos.\n", i+1);
            return 1;
        }

        media += quantidade_alunos;
    }

    
    media /= quantidade_turmas;

        // saida de dados
        printf("Media de alunos por turma: %.2f\n", media);
        return 0;
    }