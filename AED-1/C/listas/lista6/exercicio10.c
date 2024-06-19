#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura para representar um aluno
struct Aluno
{
    int matricula;
    char nome[50];
    float notas[3];
};

int main()
{
    struct Aluno alunos[5];
    int i;

    // Leitura dos dados dos alunos
    for (i = 0; i < 5; i++)
    {
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        getchar(); // Limpar o buffer do teclado
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, 50, stdin);
        printf("Digite as notas das tres provas do aluno %d: ", i + 1);
        scanf("%f %f %f", &alunos[i].notas[0], &alunos[i].notas[1], &alunos[i].notas[2]);
    }

    // Encontrando o aluno com a maior média geral
    int indiceMaiorMedia = 0;
    float maiorMedia = (alunos[0].notas[0] + alunos[0].notas[1] + alunos[0].notas[2]) / 3.0;

    for (i = 1; i < 5; i++)
    {
        float media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2]) / 3.0;
        if (media > maiorMedia)
        {
            maiorMedia = media;
            indiceMaiorMedia = i;
        }
    }

    // Exibindo o aluno com a maior média geral
    printf("\nAluno com a maior media geral:\n");
    printf("Matricula: %d\n", alunos[indiceMaiorMedia].matricula);
    printf("Nome: %s", alunos[indiceMaiorMedia].nome);
    printf("Notas: %.2f %.2f %.2f\n", alunos[indiceMaiorMedia].notas[0], alunos[indiceMaiorMedia].notas[1], alunos[indiceMaiorMedia].notas[2]);

    // Salvando os dados em um arquivo binário
    FILE *arquivo;
    arquivo = fopen("alunos.bin", "wb");
    if (arquivo == NULL)
    {
        printf("Erro ao criar o arquivo.");
        exit(1);
    }

    fwrite(&alunos[indiceMaiorMedia], sizeof(struct Aluno), 1, arquivo);

    fclose(arquivo);

    printf("\nDados do aluno com a maior media geral foram salvos em alunos.bin\n");

    return 0;
}
