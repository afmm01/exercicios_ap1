#include <stdio.h>

int main(){
	int n, i, sf1, sf2=0, sf3=1;
	
	printf("Digite o numero da sequencia da Fibonacci: ");
	scanf("%d", &n);
	
	for (i=0; i<n; i++){
		printf("%d ", sf2);
		sf1=sf2;
		sf2=sf3;
		sf3=sf2+sf1;
	}
	
	return 0;
}