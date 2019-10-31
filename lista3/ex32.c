#include <stdio.h>

int main(){
    int n1, n2, n=0, c;
    printf("Digite o valor de n1: ");
    scanf("%d", &n1);
    printf("Digite o valor de n2: ");
    scanf("%d", &n2);
    for (c=0;c<n2;c++){
        n+=n1;
    }
    printf("O resultado da multiplicacao entre %d e %d eh %d", n1, n2, n);
    return 0;
}