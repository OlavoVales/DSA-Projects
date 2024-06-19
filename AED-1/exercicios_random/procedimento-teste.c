#include <stdio.h>
#include <stdlib.h>

void trocar (int *num1, int *num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void somar (int n1, int n2){ //PORQUE ESSE AQUI FUNCIONA E O DE BAIXO NÃO
    int soma = n1 + n2;
    printf("o resultado da soma de %d com %d eh: %d", n1, n2, soma);
}

/*
void somar (int *n1, int *n2){
    int soma = *n1 + *n2;
    printf("o resultado da soma de %d com %d eh: %d", n1, n2, soma);
}
*/

int main() {

	int a = 5, b = 10;

	printf("\nEles valem %d, %d\n", a, b);

	trocar(&a, &b);

	printf("\nEles agora valem %d, %d\n", a, b);

    somar(a, b);

	return 0;
}


