#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *sayHello(char salutation[]) {

    strcpy(salutation, "hello");

    return salutation;
}

int main() {
    char *salutation; 

    salutation = sayHello(salutation);

    printf("%s\n", salutation);

    return 0;
}
