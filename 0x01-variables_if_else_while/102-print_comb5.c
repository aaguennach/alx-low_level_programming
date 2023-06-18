#include <stdio.h>

/**
 * main - entry
 * prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */

int main() {
    int i, j;
    
    for (i = 0; i <= 99; i++) {
        for (j = i; j <= 99; j++) {
            int digit1 = i / 10;
            int digit2 = i % 10;
            int digit3 = j / 10;
            int digit4 = j % 10;

            putchar(digit1 + '0');
            putchar(digit2 + '0');
            putchar(' ');
            putchar(digit3 + '0');
            putchar(digit4 + '0');

            if (i != 99 || j != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }
    
    putchar('\n');
    
    return 0;
}
