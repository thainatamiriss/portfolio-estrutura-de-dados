#include <stdio.h>
#define MAX 5 // Define o tamanho maximo da fila

// Estrutura que representa a fila
typedef struct {
    int dados[MAX];
    int frente;
    int fim;
} Fila;

// Inicializa a fila
void inicializar(Fila *f) {
    f->frente = 0;
    f->fim = -1;
}

// Verifica se a fila esta vazia
int filaVazia(Fila *f) {
    return f->fim < f->frente;
}

// Insere um elemento no final da fila (Enqueue)
void enqueue(Fila *f, int valor) {
    if (f->fim == MAX - 1) {
        printf("Fila cheia!\n");
        return;
    }
    f->fim++;
    f->dados[f->fim] = valor;
}

// Remove o primeiro elemento da fila (Dequeue)
int dequeue(Fila *f) {
    if (filaVazia(f)) {
        printf("Fila vazia!\n");
        return -1;
    }
    return f->dados[f->frente++];
}

// Exibe todos os elementos da fila
void mostrar(Fila *f) {
    if (filaVazia(f)) {
        printf("Fila vazia!\n");
        return;
    }
    for (int i = f->frente; i <= f->fim; i++) {
        printf("[%d] ", f->dados[i]);
    }
    printf("\n");
}

int main() {
    Fila minhaFila;
    inicializar(&minhaFila);

    // Inserindo elementos na fila
    enqueue(&minhaFila, 10);
    enqueue(&minhaFila, 20);
    enqueue(&minhaFila, 30);

    printf("Fila apos insercoes:\n");
    mostrar(&minhaFila);

    // Removendo o primeiro elemento
    int removido = dequeue(&minhaFila);
    printf("\nElemento removido: %d\n", removido);

    printf("\nFila apos a remocao (dequeue):\n");
    mostrar(&minhaFila);

    return 0;
}
