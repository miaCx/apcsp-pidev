#include <stdio.h>

float findA(float radius) {
  float area = 3.141592653589793238462643383279502 * radius * radius;

  return area;
}

int main()
{
  float area;
  float i = 3.5;
  while(i < 13) {
    area = findA(i);
    printf("The radius is %f\n",i);
    printf("The area is %f\n",area);
    i++;
  }
}
