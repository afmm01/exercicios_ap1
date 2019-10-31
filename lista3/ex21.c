#include <stdio.h>

int main(){
	int b, n, i, res=1;
	printf("Digite o valor da base: ");
	scanf("%d", &b);
	printf("Digite o valor da potencia: ");
	scanf("%d", &n);
	if ((b > 1)&&(n>1)){
		for (i=0;i<n;i++){
			res*=b;
		}
		printf("%d elevado a %d potencia vale %d", b, n, res);
	} else printf("O valor da base e da potencia devem ser maiores ou iguais a dois.");
	return 0;
}