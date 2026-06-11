#include <stdio.h>

int main() {
    int idade;
    float altura;

    // Entrada de dados 
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    // Saida de dados 
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);

    return 0;
}
