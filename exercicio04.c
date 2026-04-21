#include <stdio.h>
#include <stdlib.h>

int main(void){
    // variáveis
    int i, quantidade_notas;
    float media = 0, nota;

    // entrada e processamento
    printf("Digite a quantidade de notas: ");
        scanf("%i",&quantidade_notas);
        fflush(stdin);

    for(int i=0;i<quantidade_notas;i++){
        printf("Digite a nota: ");
        scanf("%f",&nota);
        fflush(stdin);

        media += nota;
    }
    
    media /= quantidade_notas;
    
        // saida de dados
        printf("Media: %.2f\n", media);
        return 0;
    }