#include <stdio.h>
#include <locale.h>

// Defini��o da struct Produto
struct Produto
{
    char nome[50];
    float preco;
};

// Fun��o para calcular e retornar o pre�o final de um produto com base no pre�o base e no lucro percentual
float calcularPrecoFinal(struct Produto p, float lucroPercentual) 
{
    // Calcula o valor do lucro em reais
    float lucro = p.preco * (lucroPercentual / 100.0);

    // Calcula o pre�o final adicionando o lucro ao pre�o base
    float precoFinal = p.preco + lucro;

    // Retorna o pre�o final do produto
    return precoFinal;
}

int main() 
{
    setlocale(LC_ALL, "Portuguese");

    // Declara��o de uma vari�vel do tipo Produto
    struct Produto meuProduto = {"Celular", 1500.00};

    // Chamada da fun��o para calcular e retornar o pre�o final do produto com um lucro de 70%
    float precoFinal = calcularPrecoFinal(meuProduto, 70.0);

    // Imprime o pre�o final calculado
    printf("O pre�o final do produto %s �: R$ %.2f\n", meuProduto.nome, precoFinal);

    return 0;
}