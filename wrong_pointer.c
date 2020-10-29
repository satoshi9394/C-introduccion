#include <stdio.h>

int main() {
  int a = 5;
  int b = 1;
  int * pi = &a;
  printf("Antes pi= %p, con valor de: %d\n", pi , *pi );
  pi++;
  printf("Despues pi= %p, con valor de: %d\n", pi , *pi);
}