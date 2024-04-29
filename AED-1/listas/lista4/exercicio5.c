#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função para verificar se um número é primo
int determinaPrimo(int n) {

    // Verificar se n é divisível por algum número entre 2 e sua raiz quadrada
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // Não é primo se for divisível
    }
    return 1; // Se não foi divisível, é primo
}

// Procedimento para encontrar o maior primo menor que m e o menor primo maior que m
void primo(int m, int *p1, int *p2) {
    // Encontrar o maior primo menor que m
    for (int i = m - 1; i > 1; i--) { //diminuo até achar alguem numero que é primo
        if (determinaPrimo(i)) {
            *p1 = i;
            break;
        }
    }

    // Encontrar o menor primo maior que m
    for (int i = m + 1;; i++) {  //aumento até achar alguem numero que é primo
        if (determinaPrimo(i)) {
            *p2 = i;
            break;
        }
    }
}

int main() {

    setlocale(LC_ALL, "Portuguese");

    int m, p1, p2;
    
    // Receber o valor de m
    printf("Digite um numero inteiro: ");
    scanf("%d", &m);
    
    // Chamada do procedimento primo
    primo(m, &p1, &p2);
    
    // Exibir os resultados
    printf("O maior numero primo menor que %d é: %d\n", m, p1);
    printf("O menor numero primo maior que %d é: %d\n", m, p2);
    
    return 0;
}