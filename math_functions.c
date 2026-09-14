#include <math.h>
#include <stdio.h>

int main() {
  float x;
  printf("enter a number to see all math functions : ");
  scanf("%f", &x);

  printf("Square root  : %.2f\n", sqrt(x));
  printf("Square   : %.2f\n", pow(x, 2));
  printf("cube  : %.2f\n", pow(x, 3));
  printf("absolute value   : %.2f\n", fabs(x));
  printf("floor (lower value)  : %.2f\n", floor(x));
  printf("ceil (upper) value  : %.2f\n ", ceil(x));
  printf("Round off to nearest %.2f\n", round(x));
}
