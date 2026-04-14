#include <stdio.h>
#include <stdlib.h>

int main(void){
    // variáveis
    float populacaoA = 80.000;
    float populacaoB = 200.000;
    float crescA = 0.03;
    float crescB = 0.015;
    int anos = 0;

    while (populacaoB > populacaoA) {
        populacaoA = populacaoA * (1 + crescA);
        populacaoB = populacaoB * (1 + crescB);
        anos++;
    }
        printf("%d Anos necessarios. ", anos);

return 0;
}
