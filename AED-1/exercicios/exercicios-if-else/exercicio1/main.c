#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

setlocale (LC_ALL, "Portuguese");

int notaAluno;

char disciplina[100];

printf("qual a disciplina: ");
gets(disciplina);

printf("qual a nota do aluno? ");
scanf("%d",&notaAluno);

if(notaAluno >= 60){
    printf("passou com %d pontos", notaAluno);
}else if(notaAluno <= 0){
    printf("digite um número positivo");
}else{
    printf("você foi reprovado");
}

return 0;

}
