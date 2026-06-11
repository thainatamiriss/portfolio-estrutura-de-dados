#include <stdio.h>

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};

    //VETOR
    printf("VETOR\n");
    for(int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]);
    }

    // MATRIZ 
    int matriz[2][2] = {
        {1, 2},
        {3, 4}
    };

    printf("\n--- MATRIZ ---\n");
    // Loops aninhados:
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
    }

    return 0;
}
