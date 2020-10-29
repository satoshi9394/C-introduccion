#include <stdio.h>

int f( int a ) {
  return a * 2;
}

int main()
{
  int d = 10;
  int c = f(d);
  printf("multiplicacion de 10 * 2: %d\n", c);

  return 0;
}
