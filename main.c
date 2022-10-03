#include "pilha.h"
#include <stdio.h>

void main(){
    int num1, num2;
    pilha p;
    scanf("%d %d", &num1, &num2);
    criarPilha(&p);
    inserirElemento(&p, num1);
    inserirElemento(&p, num2);
    imprimirPilha(&p);
}

