#include <stdio.h>

float findA(float radius) {
  float area = 3.141592653589793238462643383279502 * radius * radius;

  return area;
}

int main()
{
  float area;

  char input[256];
  float radius;
  float outerradius;

  printf("What is the minimum radius?\n");
  while (1)
  {
    fgets(input, 256, stdin);
    if (sscanf(input, "%f", &radius) == 1) break;
    printf("Please enter a valid number.\n");
  }

  printf("What is the maximum radius?\n");
  while (1)
  {
    fgets(input, 256, stdin);
    if (sscanf(input, "%f", &outerradius) == 1) break;
    printf("Please enter a valid number.\n");
  }

  area = findA(radius);

  float i = radius;
  while(i < outerradius) {
    area = findA(i);
    printf("The radius is %f\n",i);
    printf("The area is %f\n",area);
    i++;
  }
//  printf("The area is %f\n",area);


}

/*
#include <stdio.h>

int main()
{
  char input[256], name[256];
  int age;
  
  printf("What is your name?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", name);

  printf("Hello %s. How old are you?\n", name);
  while (1)
  {
    fgets(input, 256, stdin);
    if (sscanf(input, "%d", &age) == 1) break;
    printf("Not a valid age - try again!\n");
  }
  
  printf("Hi %s, you look young for %d…\n", name, age);
}

///////////////////////////////////////////////////////////


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


*/
