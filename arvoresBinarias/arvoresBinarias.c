#include <stdio.h>
#include <stdlib.h>

// Definição do nó da árvore binária
typedef struct noArv {
    int info;
    struct noArv* esq;
    struct noArv* dir;
} NoArv;

// Função para criar um nó isolado
NoArv* criarNo(int valor) {
    NoArv* novo = (NoArv*) malloc(sizeof(NoArv));
    novo->info = valor;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}

// Função recursiva para inserir um elemento (Árvore Binária de Busca)
NoArv* inserir(NoArv* raiz, int valor) {
    if (raiz == NULL) {
        return criarNo(valor);
    }
    
    // Se o valor for menor, insere na subárvore esquerda
    if (valor < raiz->info) {
        raiz->esq = inserir(raiz->esq, valor);
    } 
    // Se o valor for maior ou igual, insere na subárvore direita
    else {
        raiz->dir = inserir(raiz->dir, valor);
    }
    
    return raiz;
}

// Percurso Em-Ordem (Esquerda, Raiz, Direita) para exibir os dados
void exibirEmOrdem(NoArv* raiz) {
    if (raiz != NULL) {
        exibirEmOrdem(raiz->esq);   // Visita a subárvore esquerda
        printf("%d ", raiz->info);   // Visita o nó raiz
        exibirEmOrdem(raiz->dir);   // Visita a subárvore direita
    }
}

// Função para liberar a memória de todos os nós (Pós-Ordem)
void liberarArvore(NoArv* raiz) {
    if (raiz != NULL) {
        liberarArvore(raiz->esq);
        liberarArvore(raiz->dir);
        free(raiz);
    }
}

int main() {
    NoArv* raiz = NULL;

    // Inserindo elementos na árvore
    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30);
    raiz = inserir(raiz, 70);
    raiz = inserir(raiz, 20);
    raiz = inserir(raiz, 40);

    printf("Elementos da Arvore Binaria (Percurso Em-Ordem):\n");
    exibirEmOrdem(raiz);
    printf("\n");

    // Liberação de memória
    liberarArvore(raiz);
    return 0;
}
