#include <stdio.h>

int main(){
	printf("a");
	int val=37, val1=val-1, c;
	float i=1, soma=0;
	for (c = val; c>0; c++){
		soma += (val*val1)/i;
		i++;
		val = val1;
		val1--;
	}
	printf("O resultado da sequencia vale %.2f", soma);
	return 0;
}