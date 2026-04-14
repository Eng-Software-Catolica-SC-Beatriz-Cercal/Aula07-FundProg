#include <stdio.h>
#include <stdlib.h>

int main(void){
    // variáveis
    int n1, n2;

    // entrada
    printf("Digite 1 numero: ");
    scanf("%i",&n1);
    fflush(stdin);
    printf("Digite 2 numero: ");
    scanf("%i",&n2);
    fflush(stdin);

    // processamento e saída
    int i = n1+1;
    if (n1<n2) {
        while(i<=n2-1){
            if (i%2 == 0) printf("%i, ",i);
            i++;
        }
    }else {
        int i = n1-1;
        while(i>=n2+1) {
            if (i%2 == 0) printf("%i, ",i);
            i--;
        }
    }

        return 0;
    }