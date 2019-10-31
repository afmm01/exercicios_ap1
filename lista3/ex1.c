#include <stdio.h>
#include <math.h>

int main(){
	int val, pot;
	char resp;
	do{
		printf("Digite o valor da base da potência: \n");
		scanf("%d", &val);
		printf("Digite o valor do expoente da potência\n");
		scanf("%d", &pot);
		printf("O valor %d elevado a %d vale %.f\n", val, pot, pow(val,pot));
		printf("Deseja continuar? [S/n] \n");
		scanf(" %c", &resp);
	}while(resp != 'n');
	return 0;
}
    