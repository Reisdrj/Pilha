#include "pilha.h"
#include <stdlib.h>
#include <stdio.h>


void inserirElemento(pilha *p, int a){
    Apontador aux = (Apontador) malloc(sizeof(elemento_t));
    aux->num = a;
    if (p->topo == NULL)
    {
        p->topo = aux;
        printf("%d inserido\n", a);
        p->topo->prox = NULL;
    }
    else
    {   
        printf("FOI");
        aux->prox = p->topo;
        p->topo = aux;
        printf("%d inserido\n", a);

    }

}

void imprimirPilha(pilha *p){
    
    Apontador aux = p->topo;
    while(aux != NULL){
        printf("%d\n", aux->num);
        aux = aux->prox;
    };
    

}