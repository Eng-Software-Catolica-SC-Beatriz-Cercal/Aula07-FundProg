#include <stdio.h>
#include <stdlib.h>

int main(void){
    // variáveis
    int numero;

    // entrada
    printf("Digite um numero para descobrir sua tabuada: ");
    scanf("%i",&numero);
    fflush(stdin);

    // processamento e saída
	for(int i=1;i<=10;i++) {
		printf("%d\n", numero*i);
	}
    return 0;
}