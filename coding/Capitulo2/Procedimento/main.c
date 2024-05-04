#include <stdio.h>
#include <locale.h>

// Definição da struct Produto
struct Produto 
{
    char nome[50];
    float preco;
};

// Procedimento para exibir informações de um produto
void exibirProduto(struct Produto p) 
{
    printf("Nome: %s\n", p.nome);
    printf("Preço: R$ %.2f\n", p.preco);
}

int main() 
{
    setlocale(LC_ALL, "Portuguese");
    // Declaração de uma variável do tipo Produto
    struct Produto meuProduto = {"Celular", 1500.00};

    // Chamada do procedimento para exibir as informações do produto
    exibirProduto(meuProduto);

    return 0;
}