#include <stdio.h>

int main(){
	int m, n ;
	
	for (m=0; m<10;m++){
		for (n=0; n<10; n++){
			printf("m%d%d ", m, n);
		}
		printf("\n");
	}
	return 0;
}