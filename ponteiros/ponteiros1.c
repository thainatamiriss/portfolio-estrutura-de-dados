#include <stdio.h>

// Funcao que utiliza passagem por referencia para trocar dois valores
void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // 1. Ponteiro Simples
    int x = 5;
    int *ptr = &x;
    printf("Valor original de x: %d\n", x);
    *ptr = 20; // Alterando o valor de x diretamente na memoria
    printf("Novo valor de x: %d\n\n", x);

    // 2. Ponteiros e Arrays
    int arr[3] = {10, 20, 30};
    int *p_arr = arr;
    printf("arr[1] via aritmetica: %d\n\n", *(p_arr + 1));

    // 3. Passagem por Referencia
    int num1 = 5, num2 = 10;
    troca(&num1, &num2);
    printf("Apos a troca: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
