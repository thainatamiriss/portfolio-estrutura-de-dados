#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura da lista
typedef struct lista {
    int info;
    struct lista* prox;
} Lista;

// Inicializa a lista como NULL
Lista* inicializa(void) {
    return NULL;
}

// Insere um novo elemento no início
Lista* insere(Lista* l, int i) {
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}

// Imprime todos os elementos da lista
void imprime(Lista* l) {
    Lista* p;
    for (p = l; p != NULL; p = p->prox) {
        printf("%d -> ", p->info);
    }
    printf("NULL\n");
}

// Busca um valor na lista
Lista* busca(Lista* l, int v) {
    Lista* p;
    for (p = l; p != NULL; p = p->prox) {
        if (p->info == v)
            return p;
    }
    return NULL;
}

// Remove o último nó da lista
Lista* remove_ultimo(Lista* l) {
    if (l == NULL) return NULL;
    if (l->prox == NULL) {
        free(l);
        return NULL;
    }
    Lista* p = l;
    while (p->prox->prox != NULL) {
        p = p->prox;
    }
    free(p->prox);
    p->prox = NULL;
    return l;
}

// Libera toda a memória da lista
void libera(Lista* l) {
    Lista* p = l;
    while (p != NULL) {
        Lista* t = p->prox;
        free(p);
        p = t;
    }
}

int main(void) {
    Lista* l = inicializa();
    
    // Inserções no início
    l = insere(l, 23);
    l = insere(l, 45);
    l = insere(l, 56);
    
    printf("Lista inicial:\n");
    imprime(l);
    
    // Busca
    Lista* achou = busca(l, 45);
    if(achou != NULL) printf("\nValor 45 encontrado!\n");
    
    // Remoção do último
    l = remove_ultimo(l);
    printf("\nLista apos remover o ultimo:\n");
    imprime(l);
    
    // Liberação da memória
    libera(l);
    return 0;
}
