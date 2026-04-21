#include <stdio.h>
#include <stdlib.h>

int main(void){
    // variáveis
    int n1 = 100, n2 = 200, opc;
    int soma = 0, i;

    // processamento e saída
    do {
    for (i = n1; i<=n2; i++){
        if (i%2 == 0) soma += i;
    }
    printf("Soma dos numeros pares entre 100 e 200: %d\n", soma);

    printf ("Selecione uma opcao:\n");
    printf ("[1] Recalcular\n");
    printf ("[2] Nao recalcular\n");
    scanf("%d", &opc);
    fflush(stdin);
    
    } while (opc==1); 
     printf("Programa encerrado.");
        return 0;
        } 