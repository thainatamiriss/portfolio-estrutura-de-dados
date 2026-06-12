#include <stdio.h>
#include <stdlib.h>

// Estrutura de um nó para lista circular
typedef struct No {
    int info; 
    struct No *prox;
} Lista;

// Inicializa a lista
Lista* inicializa(void) {
    return NULL;
}

// Inserção simples adaptada para o nó inicial
Lista* insere_inicio(Lista* l, int i) {
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = novo; 
    return novo;
}

// Imprime a lista circular
void imprime_circular(Lista* l) {
    if (l == NULL) return;
    Lista* p = l;
    do {
        printf("%d -> ", p->info);
        p = p->prox;
    } while (p != l); 
    printf("(Volta ao Inicio)\n");
}

int main() {
    //Criação de uma Lista Circular
    Lista* l = inicializa();
    
    l = insere_inicio(l, 10);
    
    Lista* novo2 = (Lista*) malloc(sizeof(Lista));
    novo2->info = 20;
    l->prox = novo2;
    novo2->prox = l; 
    
    printf("Lista Circular:\n");
    imprime_circular(l);
    
    // Liberação simples da memória
    free(novo2);
    free(l);
    
    return 0;
}
