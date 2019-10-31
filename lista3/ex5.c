#include <stdio.h>

int main(){
	int idade, qtd50=0, cont, qtdIdade=0;
	float altura, peso, somaPeso=0;
	do{
		printf("Digite a idade do usuario: ");
		scanf("%d", &idade);
		printf("Digite a altura: ");
		scanf("%f", &altura);
		printf("Digite o peso: ");
		scanf("%f", &peso);
		if (idade > 50) qtd50++;
		if (idade > 10 && idade < 50){
			qtdIdade++;
			somaPeso += peso;
		}
		printf("Digite 1 para continuar e qualquer outro valor pra parar: ")
		scanf("%d", &idade);
	} while(cont == 1);
	return 0;
}