#include "pilha.h"
#include <stdio.h>

void main(){
    int num1, num2, cont;
    pilha p;
    p.topo = NULL;
    scanf("%d", &num1);
    inserirElemento(&p, num1);
    scanf("%d", &num2);
    inserirElemento(&p, num2);
    imprimirPilha(&p);
}

