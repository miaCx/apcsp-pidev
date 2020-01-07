#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'l';
  float c = 1.34;
  double d = 50.19;
  unsigned e = -20;
  short f = 5;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("char b value: %c and size: %d bytes\n", b, sizeof(b));
  printf("float c value: %f  and size: %d bytes\n", c, sizeof(c));
  printf("double d value: %f and size: %d bytes\n", d, sizeof(d));
  printf("unsigned e value: %d and size: %d bytes\n", e, sizeof(e));
  printf("short f value: %d and size: %d bytes\n", f, sizeof(f));
}

