#include <stdio.h>
#include <stdlib.h>

int main(void){
    //quais são as variáveis?
    int numero1, numero2;

    //entrada de dados
    printf("Digite 1 numero: ");
    scanf("%i",&numero1);
    fflush(stdin);
    printf("Digite 2 numero: ");
    scanf("%i",&numero2);
    fflush(stdin);

    //saída e processamento de dados
    for ( int i=numero1+1; i<=numero2-1; i=i+1) {
        printf("%i,", i);
    }

    return 0;
}