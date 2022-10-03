#include "pilha.h"
#include <stdlib.h>
#include <stdio.h>

void criarPilha(pilha p[]){
    p->prim = NULL;
    p->seg = NULL;
}

void inserirElemento( pilha p[], int v){
    if(p->cont == 0){
        p->prim = (Apontador) malloc(sizeof(elemento_t));
        p->prim->num = v;
        p->prim->baixo = NULL;
        p->cont++;
    }
    else{
        Apontador aux = (Apontador) malloc(sizeof(elemento_t));
        p->seg = p->prim;
        p->prim->baixo = p->prim;
        p->prim = aux;
        p->prim->num = v;

    }

}

void retirarElemento(pilha p[]){

    Apontador aux = p->prim;
    p->prim = p->seg;
    free(aux);

}

void imprimirPilha(pilha p[]){
    while(p->prim->baixo != NULL){
        printf("%d\n", p->prim->num);
        p->prim = p->prim->baixo;
    }
}