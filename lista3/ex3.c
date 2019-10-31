#include <stdio.h>

int main(){
	int meses=0, n=0;
	float salCarlos, salJoao;
	 printf("Digite o salário de Carlos: ");
	 scanf("%f", &salCarlos);
	 salJoao = salCarlos/3;
	 printf("Salario de Carlos:\tR$%.2f\nSalario de Joao:\tR$%.2f\n", salCarlos, salJoao);
	 while (salJoao < salCarlos){
 		salCarlos += salCarlos*0.02;
 		salJoao += salJoao*0.05;
 		meses += 1;
 		if (n%2==0){
			printf("%.2f | %.2f\n", salJoao, salCarlos);		
 		}
 		n++;
	 }
 	printf("Carlos precisa de %d meses para superar Joao.\n", meses);
 	printf("Apos esse periodo, o salario de Joao sera R$%.2f e o de Carlos sera %.2f.", salJoao, salCarlos);
	return 0;
}