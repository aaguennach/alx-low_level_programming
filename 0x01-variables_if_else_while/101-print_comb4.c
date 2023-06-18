#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			int digit1 = i / 10;
			int digit2 = i % 10;
			int digit3 = j / 10;
			int digit4 = j % 10;

			putchar(digit1 + '0');
			putchar(digit2 + '0');
			putchar(' ');
			putchar(digit3 + '0');
			putchar(digit4 + '0');

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
