#include <stdio.h>

int main() {
    int rows = 5; // number of lines in the pyramid

    for (int i = 1; i <= rows; i++) {
        // print spaces for alignment
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // print ascending numbers
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }
        // print descending numbers
        for (int k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }
        printf("\n"); // move to next line
    }

    return 0;
}

