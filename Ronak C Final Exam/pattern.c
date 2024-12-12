#include <stdio.h>

int main() {
    int i, j, n;
    char ch;


    for (i = 0; i < 5; i++) {

        for (j = 0; j < 4 - i; j++) {
            printf(" ");
        }

        for (n = i; n >= 0; n--) {
            ch = 'A' + n;
            printf("%c", ch);
        }

        printf("\n");
    }
printf(" \n");
    return 0;
}
