#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

void preencheValores(int x[], int y[]){
    srand(time(0));
    
    for(int i = 0; i < 10; i++){
        int numeroAleatorio = rand() % 11 + 10;
        x[i] = numeroAleatorio;
        y[i] = numeroAleatorio;
    }
    
    for(int i = 0; i < 10; i++){
        printf("O %do elemento de x eh %d\n", i + 1, x[i]);
    }
    
    for(int i = 0; i < 10; i++){
        printf("O %do elemento de y eh %d\n", i + 1, y[i]);
    }
}

void intercala(int x[], int y[], int length, int z[]){

}

int main(){
    int x[10], y[10];

    preencheValores(x, y);

    return 0;
}
