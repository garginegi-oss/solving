#include <stdio.h>

int reverse = 0;

int reverseNumber(int n) {
    if (n == 0)
        return 0;

    reverse = reverse * 10 + (n % 10);
    reverseNumber(n / 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    reverseNumber(num);

    printf("Reversed number = %d", reverse);

    return 0;
}