#include <stdio.h>

int main(){
	int n = 51, soma=0, nos=0, media;
	while(n < 70){
		if(n % 2 == 0){
			printf("%d ", n);
			soma += n;
			nos++;
		}
		n++;
	}
	media = 1.0 * soma / nos;
	printf("\nA soma dos valores pares entre 50 e 70 vale %d.\A media aritmetica vale %d", soma, media);
	
	return 0;
}