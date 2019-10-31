#include <stdio.h>

int main(){
	int num=100, den=0, c;
	float soma=0;
	for (c=0;c<20;c++){
		soma += (num/den);
		num--;
		den++;
	}
	printf("A soma dessa sequencia vale %f", soma);
	return 0;
}