#include <stdio.h>

int main()
{
  int a = 2;

  // if statement to test is a is equal to 0
while(a != -2) {

printf("a is %d\n", a);

if (a == 0)
  {
    printf("a is 0\n");
  }
  else if (a > 0)
  {
    printf("a is greater than 0\n");
  }
  else
  {
    printf("a is less than 0\n");
  }
a = a - 1;

}
}
