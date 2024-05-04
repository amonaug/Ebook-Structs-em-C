#include <stdio.h>

// Definição clara da struct para representar uma pessoa
struct Pessoa {
    char nome[50];
    int idade;
    char endereco[100];
};

int main() {
    // Exemplo de uso da struct Pessoa
    struct Pessoa pessoa1 = {"João", 30, "Rua Principal, 123"};

    // Imprimindo os detalhes da pessoa
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Endereço: %s\n", pessoa1.endereco);

    return 0;
}
