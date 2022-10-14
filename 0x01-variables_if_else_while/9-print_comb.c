#include <stdio.h>

/**
 * main - Entry point
 * autor: Divine John
 * Return: Always 0 (Success)
 */
int main(void)
{
	int divine;

	for (divine = 48; divine < 58; divine++)
	{
		putchar(divine);
		if (divine != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
