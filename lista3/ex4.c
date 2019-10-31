#include <stdio.h>
#include <math.h>

int main(){
	int quadrado;
	float base;
	char cont;

	do {
		printf("\nDigite o valor do quadrado: ");
		scanf("%d", &quadrado);
		base = sqrt(quadrado);
		
		if (base%1 == 0){
			printf("O valor %.f eh um quadrado perfeito.", base);
		} else {
			printf("O valor %f nao eh um quadrado perfeito.", base);
		}
	} while (base > 0);
	
	return 0;
}
