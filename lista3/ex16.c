#include <stdio.h>

int main(){
	int n, ni, n1, n2, c, impar=0;
	
	printf("Calculo da formula de Fetuccine\n");
	printf("Digite a quantidade de termos que deseja ver");
	scanf("%d", &n);
	printf("Digite o primeiro termo: ");
	scanf("%d", &n1);
	printf("Digite o segundo termo: ");
	scanf("%d", &n2);
	
	for(c=0; c<n; c++){
		if ((n1%2==0) && (n2%2==0)){
			ni = n1 - n2;
			n2 = n1;
			n1 = ni;
		} else if (((n1%2==1) && (n2%2==1)) || impar == 1){
			if (c==0) impar = 1;
			ni = n1 + n2;
			n2 = n1;
			n1 = ni;
		} else {
			printf("Ambos os valores devem ser impares ou pares.");
			break;
		}
		printf("%d ", ni);
	}
	return 0;
}