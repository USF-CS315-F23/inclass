#include <stdio.h>
#include <string.h>


void reverse(char *src, char *dst) {

  int last;

  last = strlen(src) - 1;

/*
  dst[0] = src[last];
  dst[1] = src[last - 1];
  dst[2] = src[last - 2];

  dst[3] = '\0';
*/
  int i = 0;

  while (last >= 0) {
    dst[i] = src[last];
    last -= 1;
    i += 1;
  }

  dst[i] = '\0';
}

int main(int argc, char *argv[]) {
  char s[33];
  char t[33];

  strcpy(s, "Foo");

  reverse(s, t);

  printf("s = %s\n", s);
  printf("t = %s\n", t);

  strcpy(s, "FooBar");

  reverse(s, t);

  printf("s = %s\n", s);
  printf("t = %s\n", t);


  return 0;  
}
