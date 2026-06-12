#include <stdio.h>
#include <stdlib.h>

// Estrutura da lista duplamente encadeada
typedef struct lista {
    int info;
    struct lista* ant;
    struct lista* prox;
} Lista;

// Cria um nó isolado
Lista* criarNo(int valor) {
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = valor;
    novo->ant = NULL;
    novo->prox = NULL;
    return novo;
}

// Inserção no início
Lista* insere_inicio(Lista* l, int valor) {
    Lista* novo = criarNo(valor);
    novo->prox = l;
    if (l != NULL) {
        l->ant = novo;
    }
    return novo;
}

// Inserção no final
Lista* inserirFinal(Lista* l, int valor) {
    Lista* novo = criarNo(valor);
    if (l == NULL) {
        return novo;
    }
    Lista* p = l;
    while (p->prox != NULL) {
        p = p->prox;
    }
    p->prox = novo;
    novo->ant = p;
    return l;
}

// Percorre e imprime da esquerda para a direita
void imprimir(Lista* l) {
    Lista* p = l;
    while (p != NULL) {
        printf("%d ", p->info);
        p = p->prox;
    }
    printf("\n");
}

int main() {
    Lista* l = NULL;

    l = insere_inicio(l, 20);
    l = insere_inicio(l, 10); 
    l = inserirFinal(l, 30);  

    printf("Lista Duplamente Encadeada: ");
    imprimir(l);

    return 0;
}
