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
            
    return 0;
}

