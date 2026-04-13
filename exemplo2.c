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
	if(n1<n2){
		for(int i=n1+1;i<=n2-1;i++){
			printf("%i, ",i);
		}
	}else{
		for(int i=n1-1;i>=n2+1;i--){
		printf("%i, ",i);
	}
	}
	
	
	return 0;
}