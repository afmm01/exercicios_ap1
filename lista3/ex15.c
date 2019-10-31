#include <stdio.h>

int main(){
	int n, pot, i;
	printf("Digite a quantidade de termos da serie: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		printf("%d ", i*i);
	}
	return 0;
}