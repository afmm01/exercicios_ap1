#include <stdio.h>

int main(){
    int quadro;
    float grao=1, somaGrao=1;
    for(quadro=0;quadro<64;quadro++){
        somaGrao += grao;
        grao *= 2;
    }
    printf("O total de graos que se pode colocar no tabuleiro vale %.0f", somaGrao);
    return 0;
}