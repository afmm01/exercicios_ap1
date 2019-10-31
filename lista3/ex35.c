#include <stdio.h>

int main(){
	int b10, b2;
	printf("Digite um numero inteiro de base 10: ");
	scanf("%d", &b10);
	printf("O valor em binario fica: ");
	while(b10>0){
		if (b10%2==0){ // se o valor for par
			printf("0");
		} else { // se o valor for impar
			printf("1");
		}
		b10-=1;
	}
	return 0;
}