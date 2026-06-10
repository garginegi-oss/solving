#include <stdio.h>

int main() {
    int rows = 5; // number of lines to print

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + i); // print the character repeated
        }
        printf("\n"); // move to next line
    }

    return 0;
}
