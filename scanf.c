#include <stdio.h>

void duplicar ( int * a ) {
  *a *= 2;
}

int main() {
  int number;
  printf("Ingrese un numero: ");
  scanf("%d", &number);
  printf("\nUsted ingreso el valor: %d\n", number);
  duplicar(&number);
  printf("despues de multiplicar number dio: %d\n", number);
}