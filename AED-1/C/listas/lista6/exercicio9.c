#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura para armazenar os dados de uma pessoa
struct Pessoa
{
    char nome[50];
    char dataNascimento[11]; // Assumindo formato "dd/mm/aaaa"
};

int main()
{
    struct Pessoa pessoas[6];
    int i;

    // Leitura dos dados das pessoas
    for (i = 0; i < 6; i++)
    {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(pessoas[i].nome, 50, stdin);
        printf("Digite a data de nascimento (dd/mm/aaaa) da pessoa %d: ", i + 1);
        fgets(pessoas[i].dataNascimento, 11, stdin);
    }

    // Encontrando a pessoa mais nova e a mais velha
    struct Pessoa maisNova = pessoas[0];
    struct Pessoa maisVelha = pessoas[0];

    for (i = 1; i < 6; i++)
    {
        if (strcmp(pessoas[i].dataNascimento, maisNova.dataNascimento) < 0)
            maisNova = pessoas[i];
        if (strcmp(pessoas[i].dataNascimento, maisVelha.dataNascimento) > 0)
            maisVelha = pessoas[i];
    }

    // Escrevendo no arquivo
    FILE *arquivo;
    arquivo = fopen("pessoas.txt", "w");
    if (arquivo == NULL)
    {
        printf("Erro ao criar o arquivo.");
        exit(1);
    }

    fprintf(arquivo, "Pessoa mais nova: %s\n", maisNova.nome);
    fprintf(arquivo, "Pessoa mais velha: %s\n", maisVelha.nome);

    fclose(arquivo);

    printf("Dados das pessoas foram salvos em pessoas.txt\n");

    return 0;
}
