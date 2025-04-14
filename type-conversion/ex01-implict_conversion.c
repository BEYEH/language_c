#include <stdio.h>

int main()
{
  float myFloat = 9;
  int myInt = 9.99;
  float sum = 5 / 2;

  printf("%f", myFloat); // 9.000000
  printf("%c", '\n');
  printf("%d", myInt); // 9
  printf("%c", '\n');
  printf("%f", sum); // 2.000000
  printf("%c", '\n');

  return 0;
}