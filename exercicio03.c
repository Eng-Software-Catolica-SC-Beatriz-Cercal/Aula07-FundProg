#include <stdio.h>
#include <stdlib.h>

int main(void){
    // variáveis
    int numero, i, menor, maior;

    // entrada e processamento
    for(int i=0;i<10;i++){
        printf("Digite um numero: ");
        scanf("%i",&numero);
        fflush(stdin);
        
        if (i == 0){
            maior = numero;
            menor = numero;
        }else{
            if (numero > maior ) maior = numero;
            if (numero < menor ) menor = numero;
        }
    }
    // saida de dados
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf ("Diferenca: %d\n", maior-menor);

        return 0;
    }