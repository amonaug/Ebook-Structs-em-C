#include <stdio.h>
#include "structs.h"
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Declaração de uma variável do tipo Pessoa
    struct Pessoa pessoa1;

    // Atribuindo valores aos membros da struct
    strcpy(pessoa1.nome, "Joao");
    pessoa1.idade = 30;

    // Imprimindo os valores
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d anos\n", pessoa1.idade);

    printf("\n\n");

    // Declaração de uma variável do tipo Carro
    Carro carro1;

    // Atribuindo valores aos membros da struct
    strcpy(carro1.marca, "Toyota");
    carro1.ano = 2015;

    // Imprimindo os valores
    printf("Marca: %s\n", carro1.marca);
    printf("Ano: %d\n", carro1.ano);

     printf("\n\n");

    // Imprimindo os valores
    printf("Título: %s\n", livro1.titulo);
    printf("Autor: %s\n", livro1.autor);
    printf("Ano de Publicação: %d\n", livro1.anoPublicacao);

    printf("\n\n");

    // Inicializando uma variável do tipo Inquilino com membros aninhados
    struct Inquilino inquilino1 = {"Ana", {"Rua ABC", 123}};

    // Imprimindo os valores
    printf("Nome: %s\n", pessoa1.nome);
    printf("Endereço: %s, %d\n", inquilino1.endereco.rua, inquilino1.endereco.numero);

    printf("\n\n");

    struct Produto produtos[3];
    strcpy(produtos[0].nome, "Celular");
    produtos[0].preco = 1500.00;

    //Imprimindo os valores
    printf("Nome : %s\n", produtos[0].nome);
    printf("Nome : %0.2f\n", produtos[0].preco);


}