#include <stdio.h>
#include <string.h>

int main()
{
  char ab1[25];
  char ab2[] = "abcdefghijklmnopqrstuvwxyz";
  char* ab1p = ab1;

  for(int i = 0; i < 26; i++) {
  *(ab1p + i) = 'a' + i;
  }
  ab1[26]= '\0';

///////////////////////////////////////////////////////////////////////////////////////////
//print the strings

  printf("ab1: %s\n", ab1);
  printf("ab2: %s\n",ab2);

  if (strcmp(ab1, ab2) == 0) {
    printf("the strings are identical\n");
  }
  else {
    printf("the strings are different\n");
  }

  for(int i = 0; i < 26; i++) {
  *(ab1p + i) = *(ab1p + i) - 32;
  }

  printf("ab1: %s\n", ab1);
  printf("ab2: %s\n",ab2);



    if (strcmp(ab1, ab2) == 0) {
    printf("the strings are identical\n");
    }
    else {
    printf("the strings are different\n");
    }

}


