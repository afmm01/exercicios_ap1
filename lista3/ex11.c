#include <stdio.h>

int main(){
	int n, n1, fat=1, c;
	printf("Digite o valor que deseja saber o fatorial: ");
	scanf("%d", &n);
	if (n>0){
		n1 = n;
		for (c=0; c < n; c++){
			fat *= n1;
			n1--;
		}
		printf("O fatorial de %d eh %d", n, fat);
	} else printf("O valor deve ser igual ou maior a 1.");
	
	return 0;
}