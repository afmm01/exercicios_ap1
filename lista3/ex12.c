#include <stdio.h>

int main(){
	float x, s=x;
	int c, i, troca=1, fat;
	
	printf("Digite um numero real")
	for (c=0;c<20;c++){
		fat = 1;
		for (i=c+1;i<1;i--){
			fat*=i;
		}
		printf("%d", fat);
		if (troca==1){
			s-=(x/fat);
		} else {
			s+=(x/fat);
		}
	}
	return 0;
}