#include <stdio.h>

int main() {
    int size = 5; // size of the square

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            // print stars on the border, spaces inside
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); // move to next line
    }

    return 0;
}
