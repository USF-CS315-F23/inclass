#include <stdio.h>

int main(int argc, char *argv[]) {
  int x;
  int *ip;

  printf("sizeof(int) = %ld\n", sizeof(int));
  printf("sizeof(int *) = %ld\n", sizeof(int *));

  ip = &x;

  x = 99;

  printf("x   = %d\n", x);
  printf("*ip = %d\n", *ip);

  char c;
  float f;
  double d;

  c = 'a';
  f = 3.14;
  d = 3.1456;

  char *cp;
  float *fp;
  double *dp;

  printf("sizeof(cp) = %ld\n", sizeof(cp));
  printf("sizeof(fp) = %ld\n", sizeof(fp));
  printf("sizeof(dp) = %ld\n", sizeof(dp));

  printf("cp = %p\n", cp);
  printf("fp = %p\n", fp);
  printf("dp = %p\n", dp);

  cp = &c;
  fp = &f;
  dp = &d;

  printf("cp = %p\n", cp);
  printf("fp = %p\n", fp);
  printf("dp = %p\n", dp);
  
  return 0;
}
