#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
Descrição: Função que tem como funcionalidade determinar a validação da senha do usuário, levando em conta a presença de: pelo menos 8 digitos, uma letra maiscula,
uma letra minuscula, um numero e um caractere especial, sem ordem determinada.
Entrada: Senha digitada pelo usuário
Saída: Retorno em texto caso a senha tenha sido validada ou não.
*/

int main(){

    char senha[100];
    int senhaValidada = 0, letraMaisculaValidada = 0, letraMinusculaValidada = 0, numeroValidado = 0, caractereEspecialValidado = 0;

    printf("digite a senha desejada: ");
    scanf("%s", senha);

    
    if(strlen(senha) >= 8){

        senhaValidada = 1;

    }

    for(int i = 0; i < strlen(senha); i++){

        if(isupper(senha[i])){ // isupper() = metodo que retorna true caso o valor passado for uma letra maiscula

            letraMaisculaValidada = 1;

        }else if(islower(senha[i])){ // islower() = metodo que retorna true caso o valor passado for uma letra minuscula

            letraMinusculaValidada = 1;

        }else if(isdigit(senha[i])){ // isdigit() = metodo que retorna true caso o valor passado for um numero

            numeroValidado = 1;

        }else if(!isalnum(senha[i])) { // isalnum() = metodo que retorna true caso o valor passado for um numero ou uma letra, nesse caso porém
                                       // ele não sendo nem uma letra nem um número, ele será um caractere especial.

            caractereEspecialValidado = 1;
        }

        //poderia ter fazer um break tambm (com as condições do if abaixo) pra caso todas as condições já tivessem sidos cumpridas, não continuar o loop desnecessariamente

    }

    if (senhaValidada == 1 && letraMaisculaValidada == 1 && letraMinusculaValidada == 1 && numeroValidado == 1 && caractereEspecialValidado == 1){ //condição para validação da senha
        printf("a senha %s foi validada!", senha);
    } else {
        printf("a senha %s NAO foi validada!", senha);
    }


    return 0;
}