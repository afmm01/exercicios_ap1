#include <stdio.h>

int main(){
	float n1, n2, media, mediaSala=0;
	int aprov=0, exame=0, rep=0, c, alunos;
	printf("Digite o numero de alunos: \n");
	scanf("%d", &alunos);
	for (c=0; c<alunos; c++){
		printf("Digite a primeira nota do aluno: \n");
		scanf("%f", &n1);
		printf("Digite a segunda nota do aluno: \n");
		scanf("%f", &n2);
		media = (n2+n1)/2;
		mediaSala += media;
		printf("Media do aluno: %.2f\n", media);
		if (media > 7){
			printf("Aprovado!\n");
			aprov++;
		} else if (media > 3){
			printf("Exame.\n");
			exame++;
		} else {
			printf("Reprovado.\n");
			rep++;
		}

	}
	printf("Estatisticas da sala\n----------------------\n");
	printf("Aprovados: %d\nExame: %d\nReprovados: %d\nMedia da classe: %.2f", aprov, exame, rep, mediaSala/alunos);
	
	return 0;
}