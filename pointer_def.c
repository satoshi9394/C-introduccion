#include <stdio.h>

int main() {
  int number = 10;
  int * pointerToNumber = &number;

  printf("%p, %d\n", pointerToNumber, *pointerToNumber);
}