#include <stdio.h>

// Struct para o endereco (Aninhada)
typedef struct {
    char rua[50];
    int numero;
} Endereco;

// Struct principal utilizando typedef
typedef struct {
    char nome[50];
    int idade;
    Endereco end; // Membro do tipo Endereco
} Pessoa;

// Função que recebe struct por ponteiro
void alterarIdade(Pessoa *p) {
    p->idade = 30; // Uso do operador seta (->)
}

int main() {
    Pessoa pessoa1;

    // Entrada de dados
    printf("Digite o nome: ");
    scanf(" %[^\n]", pessoa1.nome);

    printf("Digite a idade: ");
    scanf("%d", &pessoa1.idade);

    printf("Rua: ");
    scanf(" %[^\n]", pessoa1.end.rua);

    printf("Numero: ");
    scanf("%d", &pessoa1.end.numero);

    // Chamada da funcao passando o endereco
    alterarIdade(&pessoa1);

    // Exibicao dos dados com operador ponto (.)
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade alterada: %d\n", pessoa1.idade);
    printf("Rua: %s\n", pessoa1.end.rua);
    printf("Numero: %d\n", pessoa1.end.numero);

    return 0;
}
