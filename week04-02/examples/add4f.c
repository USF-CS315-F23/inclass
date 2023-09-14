#include <stdio.h>

int add4f_c(int a, int b, int c, int d);
int add4f_s(int a, int b, int c, int d);
int add2_s(int a, int b);


int main(int argc, char *argv[]) {
    int x;

    x = add4f_c(1, 2, 3, 4);
    printf("add4f_c(1, 2, 3, 4) = %d\n", x);

    x = add2_s(22, 33);
    printf("add2_s(22, 33) = %d\n", x);

    x = add4f_s(1, 2, 3, 4);
    printf("add4f_s(1, 2, 3, 4) = %d\n", x);

    return 0;
}
