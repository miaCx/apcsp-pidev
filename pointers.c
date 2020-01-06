#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 5;
  float e = 6;
  float* ptrtod = &d;
  float* ptrtoe = &e;

  printf("d is %f\ne is %f\n", d, e);
  printf("address of d is %d\naddress of e is %d\n", &d, &e);

  float n = *ptrtod;
  *ptrtod = *ptrtoe;
  *ptrtoe = n;

  printf("d is %f\ne is %f\n", d, e);
  printf("address of d is %d\naddress of e is %d\n", &d, &e);

}
