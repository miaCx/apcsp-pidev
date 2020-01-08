#include <stdio.h>
#include <string.h>


/*
int main()
{

  char str1[10] = "first";
  char str2[10] = "second";
  char str3[20];

  printf("length of str1 = %d\n", strlen(str1));

  strcpy(str3, str1);
  strcat(str3, str2);

  printf("%s + %s = %s\n", str1, str2, str3);

  if (strcmp(str1, str2) == 0)
    printf("the strings are identical\n");
  else
    printf("the strings are different\n");
}
*/


int main()
{
  // str1 is a pointer to a constant - cannot change the contents of str1
//  char* str1 = "hello1";

//  printf("str1 : %s\n", str1);


  char ab1[25];
  char ab2[] = "abcdefghijklmnopqrstuvwxyz";
//  printf("str1 : %s\n", str1);
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

/*  // DO NOT DO THIS - attempt to modify a character in a string constant
  //   compiler will not complain though
  //*(str1 + 3) = 'c';


  
  // str2 is an array which holds a copy of the string constant
  char str2[7] = "hello2";
  
  printf("str2 : %s\n", str2);

  char* str2p = str2;
  *(str2p + 3) = 'c';  // OK to modify array
  printf("str2 : %s\n", str2p);
  

  
  // str3 is also an array which holds a copy of the constant
  //   intialized to hold the string length
  char str3[] = "this is a test";
  printf("str3 : %s\n", str3);

  str3[3] = 'f';
  printf("str3 : %s\n", str3);*/

