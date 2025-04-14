#include <stdio.h>

int main()
{
  float myFloat = (float)9;
  int myInt = (int)9.99;
  float sum = (float)5 / 2;
  int maxScore = 500;
  int userScore = 423;

  float percentage = (float)userScore / maxScore * 100.0;

  printf("%f\n", myFloat);                           // 9.000000
  printf("%d\n", myInt);                             // 9
  printf("%f\n", sum);                               // 2.500000
  printf("%.1f\n", sum);                             // 2.5
  printf("User's percentage is %.2f\n", percentage); // 84.60

  return 0;
}