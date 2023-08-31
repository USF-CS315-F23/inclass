#include <stdio.h>

int main(int argc, char *argv[]) {

  char s[33];
  char *p;
  
  /* s[0], s[1], s[31], s[32] */

  s[0] = 'F';
  s[1] = 'o';
  s[2] = 'o';
  s[3] = '\0';

  printf("s = %s\n", s);

  //p = s;
  p = &s[0];

  printf("p = %s\n", p);
  
  return 0;
}
