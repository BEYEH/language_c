#include <stdio.h>

int main(void)
{
  char a = 65, b = 66, c = 67;
  char space = 32;
  char lf = 10;
  char cr = 13;

  printf("%c", a);
  printf("%c", space);
  printf("%c", b);
  printf("%c", c);
  printf("%c%c", cr, lf);

  return 0;
}