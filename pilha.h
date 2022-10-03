typedef struct elemento *Apontador;
typedef struct pilha *Apontadorp;



typedef struct elemento{

    int num;
    Apontador prox;

}elemento_t;

typedef struct {

    Apontador topo;

}pilha;

void inserirElemento(pilha *p, int a);
void retirarElemento(pilha *p);
void imprimirPilha(pilha *p);