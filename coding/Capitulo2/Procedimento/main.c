#include <stdio.h>
#include <locale.h>

// Defini��o da struct Produto
struct Produto 
{
    char nome[50];
    float preco;
};

// Procedimento para exibir informa��es de um produto
void exibirProduto(struct Produto p) 
{
    printf("Nome: %s\n", p.nome);
    printf("Pre�o: R$ %.2f\n", p.preco);
}

int main() 
{
    setlocale(LC_ALL, "Portuguese");
    // Declara��o de uma vari�vel do tipo Produto
    struct Produto meuProduto = {"Celular", 1500.00};

    // Chamada do procedimento para exibir as informa��es do produto
    exibirProduto(meuProduto);

    return 0;
}