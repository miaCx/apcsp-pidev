#include <stdio.h>


void arrayAdd(int n, int s, int hello[]) {
    printf("n is %d\ns is %d\n", n, s);
/*
    for(int i = 0; i < s -1; i++) {
      hello[i] = hello[i] + n;
    printf("%d\n", hello[i]);
*/


    for(int i = 0; i < s -1; i++) {
     *(hello+i) = *(hello+i) + n;
  }
}

/***********************************************/

int main()
{  //activity stuff
  int hello[100];
    for(int i = 0; i < 99; i++) {
      hello[i] = i * i;
    printf("%d\n", hello[i]);
  }

  printf("\n\n");
  arrayAdd(1, 100, hello);

  for(int i = 0; i < 99; i++) {
    printf("%d\n", hello[i]);
  }
}
