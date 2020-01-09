#include <stdio.h>
#include <stdlib.h>


/******** find the area ***********/
float findA(float radius) {
  float area = 3.141592653589793238462643383279502 * radius * radius;

  return area;
}


/******** main function ***********/
int main(int argc, char* argv[]) {
  //declaring variables
  float area;

  char input[256];
  float radius;
  float outerradius;

  //outer radius greater than first
/*  int arg1;
  float found1 = sscanf(argv[1], "%f", &arg1);
  int arg2;
  float found2 = sscanf(argv[2], "%f", &arg2);
  if (found2 > found1)
    {
      printf("Please make sure the second number is greater than the first\n");
      return 1;
    }*/
/*----------------------------------------------------------------------------*/

  if (argc == 1) {
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
      if (sscanf(input, "%f", &outerradius) == 1)
        if (radius < outerradius) break;
      printf("Please enter a valid number greater than the minimum radius.\n");
    }

    area = findA(radius);

    float i = radius;
    while(i < outerradius + 1) {
      area = findA(i);
      printf("The radius is %f\n",i);
      printf("The area is %f\n",area);
      i++;
    }
  }

// testing
  else if (argc > 3) {
      printf("Please enter either 2 arguments or no arguments.\n", argv[0]);
      //printf("%s : Please enter either 2 arguments or no arguments.\n", argv[0]);
      //return 1;
  }

  else {
    radius = atoi(argv[1]);
    outerradius = atoi(argv[2]);

    float i = radius;
    while(i < outerradius + 1) {
      area = findA(i);
      printf("The radius is %f\n",i);
      printf("The area is %f\n",area);
      i++;
    }

  }
}

