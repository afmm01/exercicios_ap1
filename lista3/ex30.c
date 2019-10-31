#include <stdio.h>
#define PI 3.14159

int main(){
    float vol;
    int r;
    do{
        printf("Digite o valor do raio (entre 0 e 20): ");
        scanf("%d", &r);
        vol = (4.0/3)*PI*r*r*r;
        printf("O volume da esfera vale %.3f\n", vol);
    } while (!(r>20 || r<0));
    return 0;
}