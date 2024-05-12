#include <stdio.h>
#include <string.h>

void sayHello(char *);

void sayHello(char *s) {
  strcpy(s, "hello");
}

int main() {
  /* Memory allocation */
  char salutation[6];
  sayHello(salutation);
  printf("%s\n", salutation);
  
  return 0;
}
