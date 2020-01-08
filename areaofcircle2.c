#include <stdio.h>

float findA(float radius) {
  float area = 3.141592653589793238462643383279502 * radius * radius;

  return area;
}

int main()
{
  float area;

  char input[256], name[256];
  int radius;

  printf("What is the radius?\n");
  while (1)
  {
    fgets(input, 256, stdin);
    if (sscanf(input, "%d", &radius) == 1) break;
    printf("Please enter a valid number.\n");
  }

  area = findA(radius);
  printf("The area is %f\n",area);

}

