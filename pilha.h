typedef struct elemento *Apontador;
typedef struct pilha *Apontadorp;



typedef struct elemento{

    int num;
    Apontador baixo;

}elemento_t;

typedef struct {

    Apontador prim;
    Apontador seg;
    int cont;

}pilha;

void criarPilha(pilha p[]);
void inserirElemento(pilha p[], int v);
void retirarElemento(pilha p[]);
void imprimirPilha(pilha p[]);