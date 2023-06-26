#include<stdio.h>
/**
 *main - Entry point
 *Description 'Patience, persistance and perspiration'
 *Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}

