#include <stdio.h>

int main(){
	int c, id, idgordo, idmagro, boi;
	float peso, pmagro, pgordo;
	for(c=0;c<90;c++){
		boi = c+1;
		printf("Digite o numero de identificação do boi %d: ", boi);
		scanf("%d", &id);
		printf("Digite o peso do boi %d: ", boi);
		scanf("%f", &peso);
		if (c==0){
			pgordo = peso;
			idgordo = id;
			pmagro = peso;
			idmagro = id;
		} else if (peso < pmagro){
			pmagro = peso;
			idmagro = id;
		} else if (peso > pgordo){
			pgordo = peso;
			idgordo = id;
		}
	}
	printf("O boi mais gordo foi o id %d que pesa %.1f.\n", idgordo, pgordo);
	printf("O boi mais magro foi o id %d que pesa %.1f.", idmagro, pmagro);
	return 0;
}