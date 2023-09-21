#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char *str = "Foo";
    int count = 1;
    int i = 1;

    /* Process args */
    while (i < argc) {
        if (argv[i][0] == '-' && argv[i][1] == 'r'
            && argv[i][2] == '\0') {
            count = atoi(argv[i + 1]);
            i += 2;
        } else {
            str = argv[i];
            i += 1;
        }
    }
    
    /* Echo */
    for (int i = 0; i < count; i++) {
        printf("%s\n", str);
    }

    return 0;
}
