#include <stdio.h>

int main(){
	int n, soma=0;
	for (n = 1; n<21; n++){
		printf("%d\n", n);
		soma += n;
	}
	printf("A soma entre os valores mostrados eh %d", soma);
}