#include <stdio.h>

int main() {
    float nota;
    
    printf("Digite a nota do aluno (0.0 a 10.0): ");
    scanf("%f", &nota);
    
    // Estrutura de decisao encadeada 
    if (nota >= 7.0) {
        printf("Aprovado! \n");
    } else if (nota >= 5.0) {
        printf("Recuperacao \n");
    } else {
        printf("Reprovado. \n");
    }
    
    return 0;
}
