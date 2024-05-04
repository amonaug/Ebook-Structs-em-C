#include <stdio.h>
#include <locale.h>

// Definição da struct Produto
struct Produto
{
    char nome[50];
    float preco;
};

// Função para calcular e retornar o preço final de um produto com base no preço base e no lucro percentual
float calcularPrecoFinal(struct Produto p, float lucroPercentual) 
{
    // Calcula o valor do lucro em reais
    float lucro = p.preco * (lucroPercentual / 100.0);

    // Calcula o preço final adicionando o lucro ao preço base
    float precoFinal = p.preco + lucro;

    // Retorna o preço final do produto
    return precoFinal;
}

int main() 
{
    setlocale(LC_ALL, "Portuguese");

    // Declaração de uma variável do tipo Produto
    struct Produto meuProduto = {"Celular", 1500.00};

    // Chamada da função para calcular e retornar o preço final do produto com um lucro de 70%
    float precoFinal = calcularPrecoFinal(meuProduto, 70.0);

    // Imprime o preço final calculado
    printf("O preço final do produto %s é: R$ %.2f\n", meuProduto.nome, precoFinal);

    return 0;
}