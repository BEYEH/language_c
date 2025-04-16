#include <stdio.h>

/*
 * variable = (condition) ? expressionTrue : expressionFalse;
 */

int main(void)
{
  int time = 20;

  (time < 18) ? printf("Good day.\n") : printf("Good evening.\n");

  return 0;
}