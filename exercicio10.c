#include <stdio.h>
#include <stdlib.h>

int main(void){
    // variáveis
    int base, expoente;
    int potencia = 1, i;

    // processamento de dados
    printf("Digite a base: ");
    scanf("%d", &base);
    fflush(stdin);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);
    fflush(stdin);

    for (i = 0; i < expoente; i++){
        potencia *= base;
    }
    //saida de dados
    printf("O resultado da potencia é: %d\n", potencia);
    return 0;
}