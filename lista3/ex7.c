#include <stdio.h>

int main(){
	int num, qtd=0, soma=0, maior, menor, qtdpar=0;
	float media, medpar=0, impar=0;
	do {
		printf("Digite um numero inteiro (30000 para cancelar): ");
		scanf("%d", &num);
		if (num!=30000) {
			qtd++;
			soma+=num;
			if (qtd==1){
				maior = num;
				menor = num;
			} else if (num > maior){
				maior = num;
			} else if (num < menor){
				menor = num;
			}
			if (num%2 == 0){
				medpar += num;
				qtdpar++;
			} else {
				impar++;
			}
		}
	} while (num != 30000);
	media = (1.0*soma)/qtd;
	printf("A soma dos valores digitados vale %d\n", soma);
	printf("Foram digitados %d valores.\n", qtd);
	printf("A media dos valores digitados vale %f\n", media);
	printf("O maior numero digitado foi %d\n", maior);
	printf("O menor numero digitado foi %d\n", menor);
	printf("A media dos numeros pares digitados vale %f\n", medpar/qtdpar);
	printf("A porcentagem dos numeros impares dogotados eh %.2f%%", (impar/qtd)*100);
	return 0;
}