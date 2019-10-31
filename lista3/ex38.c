#include <stdio.h>

int main(){
	int cres, div=1, resto=10, result=0, dig;
	unsigned long long int cpf, ncpf, valor;
	printf("Digite o CPF sem os digitos validadores: ");
	scanf("%llu", &cpf);
	ncpf = cpf;

	for(cres=2;cres<11;cres++){
			valor = (ncpf%resto)/div;
			result += valor*cres;
			resto*=10;
			div*=10;
	}

	if(result%11 < 2){
		dig = 0;
	} else {
		dig = 11 - result%11;
	}
	printf("O primeiro digito vai ser %d\n", dig); 
	ncpf = (ncpf*10)+dig;
	result =0;
	resto = 10;
	div = 1;
	for(cres=2;cres<12;cres++){
			valor = (ncpf%resto)/div;
			result += valor*cres;
			resto*=10;
			div*=10;
	}
	if(result%11 < 2){
		dig = 0;
	} else {
		dig = 11 - result%11;
	}
	printf("O segundo digito vai ser %d\n", dig);
	ncpf = (ncpf*10)+dig;
	printf("O CPF completo deve ser %.011llu", ncpf);

	return 0;
}