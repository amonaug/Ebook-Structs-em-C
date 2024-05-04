struct Aluno
{
    char Nome[100];
    long int  Matricula;
    int Idade;
};

//Declara??o tradicional
struct Produto
{
    char Nome[100];
    int Codigo;
    float Preco;
};

//Declara??o de tipo definido pelo usu?rio
typedef struct
{
    char Marca[100];
    char Modelo[100];
    int Ano;
}Carro;

//Inicializa??o ao mesmo tempo
struct Pessoa 
{
    char nome[50];
    int idade;
} pessoa1 = {"Joao", 30};

//Aninhamento de Structs
struct Departamento
{
    int Departamento_Id;
    char Nome[50];
};


struct Funcionario
{
    int Funcionario_Id;
    char Nome[50];
    float Salario;
    struct Departamento departamento; 
};
