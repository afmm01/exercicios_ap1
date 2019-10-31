#include <stdio.h>

int main(){
	int i, c, num=1000, den=1, par=1;
	float soma=0;
	while (num > 0){
		if (den%2==0){
			if (par==1){
				soma += num/den;
				par = 0;
			} else {
				soma -= num/den;
				par = 1;
			}
			num-=3;
			den++;
		} else {
			
		}
	}
	printf("O resultado dessa soma vale %f", soma);
	return 0;
}