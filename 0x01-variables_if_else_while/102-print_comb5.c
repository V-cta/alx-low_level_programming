#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i <= 99; i++) {
        for (j = i; j <= 99; j++) {
            // Print tens digit of first number
            putchar('0' + i / 10);
            
            // Print ones digit of first number
            putchar('0' + i % 10);
            
            // Print space separator
            putchar(' ');

            // Print tens digit of second number
            putchar('0' + j / 10);
            
            // Print ones digit of second number
            putchar('0' + j % 10);

            // Print comma and space separator
            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}

