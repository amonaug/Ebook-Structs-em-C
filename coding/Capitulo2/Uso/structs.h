struct Pessoa 
{
    char nome[50];
    int idade;
};

typedef struct 
{
    char marca[50];
    int ano;
} Carro;

struct Livro {
    char titulo[100];
    char autor[50];
    int anoPublicacao;
} livro1 = {"Dom Casmurro", "Machado de Assis", 1899};

struct Endereco 
{
    char rua[100];
    int numero;
};

struct Inquilino
{
    char nome[50];
    struct Endereco endereco;
};

struct Produto
{
    char nome[50];
    float preco;
};