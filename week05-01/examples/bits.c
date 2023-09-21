#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

void prbin(char *prefix, const void* address, size_t length, bool space_every_4_bits) {
    unsigned char* byte_ptr = (unsigned char*)address;
    printf("%s 0b", prefix);

    for (size_t i = 0; i < length; i++) {
        for (int j = 7; j >= 0; j--) {  // Loop for each bit
            printf("%d", (byte_ptr[i] >> j) & 1);
            if (space_every_4_bits && j % 4 == 0 && j != 0) {
                printf(" ");
            }
        }
        if (i < length - 1) {
            printf(space_every_4_bits ? " " : "");
        }
    }
    printf("\n");
}

uint8_t and_s(uint8_t a, uint8_t b);
uint8_t and_s(uint8_t a, uint8_t b);
uint8_t not_s(uint8_t a);
uint8_t sll_s(uint8_t a, uint8_t n);

int main(int argc, char *argv[]) {
    uint8_t a, b;
    uint8_t r;

    a = 0b11001010;
    b = 0b10011001;

    // AND
    prbin("a    =", &a, 1, true);
    prbin("b    =", &b, 1, true);
    r = a & b;
    prbin("a&b  =", &r, 1, true);
    r = and_s(a, b);
    prbin("a&b_ =", &r, 1, true);

    printf("\n");

    // OR
    prbin("a    =", &a, 1, true);
    prbin("b    =", &b, 1, true);
    r = a | b;
    prbin("a|b  =", &r, 1, true);
    printf("\n");

    // XOR
    prbin("a    =", &a, 1, true);
    prbin("b    =", &b, 1, true);
    r = a ^ b;
    prbin("a^b  =", &r, 1, true);
    printf("\n");

    // NOT
    prbin("a    =", &a, 1, true);
    r = ~a;
    prbin("~a   =", &r, 1, true);
    r = not_s(a);
    prbin("~a_  =", &r, 1, true);

    printf("\n");


    // SHIFTS

    a = 0b00110110;
    
    // LEFT SHIFT
    prbin("a    =", &a, 1, false);
    printf("a    = %u\n", a);
    r = a << 1;
    prbin("a<<1 =", &r, 1, false);
    printf("a    = %u\n", r);
    r = a << 2;
    prbin("a<<2 =", &r, 1, false);
    r = sll_s(a, 2);
    prbin("a<<2_=", &r, 1, false);
    printf("a    = %u\n", r);
    

    printf("\n");
    
    // RIGHT SHIFT
    prbin("a    =", &a, 1, false);
    printf("a    = %u\n", a);
    r = a >> 1;
    prbin("a>>1 =", &r, 1, false);
    printf("a    = %u\n", r);    
    r = a >> 2;
    prbin("a>>2 =", &r, 1, false);
    printf("a    = %u\n", r);    
    printf("\n");

    // 2's complement

    a = 0b00001000; // 8
    prbin("a    =", &a, 1, false);
    r = ~a;
    prbin("r    =", &r, 1, false);
    r = r + 1;
    prbin("r    =", &r, 1, false);
    printf("r    = %d\n", (int8_t) r);
    printf("\n");

    // Masking

    a = 0b10111100;
    prbin("a    =", &a, 1, false);
    r = (a >> 2);
    prbin("r    =", &r, 1, false);
    r = r & 0b00001111;
    prbin("r    =", &r, 1, false);
    printf("\n");

    a = 0b10100100;
    prbin("a    =", &a, 1, false);
    r = (a >> 2);
    prbin("r    =", &r, 1, false);
    r = r & 0b00001111;
    prbin("r    =", &r, 1, false);
    printf("\n");

    uint32_t x = 0b01000101000;
    prbin("x    =", &x, 4, false);

    int start = 3;
    int end = 5;
    int len = ((end - start) + 1);

    uint32_t v = x >> start;
    prbin("v    =", &v, 4, false);

    uint32_t m = 0b1 << len;
    prbin("m    =", &x, 4, false);
    m = m - 1;
    prbin("m    =", &x, 4, false);

    v = x & m;    
    prbin("v    =", &x, 4, false);

    int8_t n = 0b11110000;

    printf("n    = %d\n", n);
    prbin("n    =", &n, 1, false);
    r = n >> 2;
    prbin("r    =", &r, 1, false);
    printf("r    = %d\n", (int8_t) r);

    return 0;
}

