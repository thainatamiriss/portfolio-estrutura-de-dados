#include <stdio.h>
#include <stdlib.h>

// Estrutura do Nó
typedef struct no {
    int info;
    struct no *prox;
} No;

// Estrutura da Pilha
typedef struct pilha {
    No *topo;
} Pilha;

// Inicializa a pilha
Pilha* criarPilha() {
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

// Verifica se a pilha está vazia
int vazia(Pilha *p) {
    return p->topo == NULL;
}

// Insere no topo (Push)
void push(Pilha *p, int valor) {
    No *novo = (No*) malloc(sizeof(No));
    novo->info = valor;
    novo->prox = p->topo;
    p->topo = novo;
}

// Remove do topo (Pop)
int pop(Pilha *p) {
    No *aux = p->topo;
    int v;
    if (!vazia(p)) {
        p->topo = aux->prox;
        v = aux->info;
        free(aux);
        return v;
    } else {
        printf("Pilha vazia\n");
        return -1; // Retorno para erro
    }
}

// Imprime a pilha
void imprimir(Pilha *p) {
    No *aux = p->topo;
    while (aux != NULL) {
        printf("[%d]\n", aux->info);
        aux = aux->prox;
    }
}

int main() {
    Pilha *p = criarPilha();

    // Inserindo elementos
    push(p, 10);
    push(p, 20);
    push(p, 30);

    printf("Pilha atual:\n");
    imprimir(p);

    // Removendo um elemento
    int removido = pop(p);
    printf("\nElemento removido: %d\n", removido);

    printf("\nPilha apos o pop:\n");
    imprimir(p);

    return 0;
}
