#include <stdio.h>
int main()
{
  int i;
  float x;
  for (i = 0; i < 32; i++)
  {
    x+=i;
    printf("Hello Holberton\n");
    printf("%f\n", x);
  }
  return 1;
}
