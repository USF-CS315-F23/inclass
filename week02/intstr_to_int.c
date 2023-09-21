#include <stdio.h>

int intstr_to_int(char *s) {
    int num = 0;
    int digit = 0;
    int i = 0;

    while (s[i] != '\0') {
        num *= 10;
        digit = s[i] - '0';
        num += digit;
        i += 1;
    }

    return num;
}

int main(int argc, char *argv[]) {
    int v;

    v = intstr_to_int(argv[1]);
    printf("v = %d\n", v);

    return 0;
}
