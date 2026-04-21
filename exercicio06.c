#include <stdio.h>
#include <stdlib.h>

int main(void){
    // variáveis
    int i, quantidade_cd;
    float total = 0, valor_cd;
    float media = 0;

    // entrada e processamento
    printf("Digite a quantidade de CD's: ");
        scanf("%i",&quantidade_cd);
        fflush(stdin);

         for(int i=0;i<quantidade_cd;i++){
        printf("Digite o valor do CD %d: ", i+1);
        scanf("%f",&valor_cd);
        fflush(stdin);

        total += valor_cd;
    }
    media = total/quantidade_cd;

        // saida de dados
        printf("Valor total investido: %.2f\n", total);
        printf("Custo médio por unidade: %.2f\n", media);
        return 0;
    }