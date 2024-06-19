#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,c,d=1; //declara 4 variaveis como int (a,b,c,d) forém só atribui valor a variavel d

    a = -2; //atribuição de um numero inteiro negativo a variavel a.

    b = a*a; // atribuição do valor de a vezes a, para a variável b, resultado 4.

    c = d++; //atribui c como 1 (d), devido a ordem do operador de incremento, que logo após a impressão adiciona +1 ao valor de d

    d = c++ + 5; //realiza a operação de c (1) com o numero 5,resultado em 6 que é o resultado de d, e após atribui mais 1 ao valor de c, sendo agora 2 o seu novo valor
                 //realiza a operação, depois soma + 1 a c

    d = ++c + 5; //atribui +1 ao c, devido a ordem do operador de incremento, resultando em 3 e após atribui o novo valor respectivo a 5, resultando em 8, novo valor de d
                 //soma + 1 a c, depois realiza a soma

    printf ("%d %d %d %d", a, b, c, d);

    return 0;
}