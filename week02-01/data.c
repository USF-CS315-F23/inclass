#include <stdio.h>

int x;

int main(int argc, char *argv[]) {
  int y;
  
  for (int i = 0; i < argc; i++) {
    printf("argv[%d] = %s\n", i, argv[i]);
  }  

  x = 99;

  printf("x = %d\n", x);

  return 0;
}
