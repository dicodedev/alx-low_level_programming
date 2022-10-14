#include <stdio.h>

/**
 * main - Entry point
 * author: Divine John
 * Return: Always 0 (Success)
 */
int main(void)
{
	char data;

	for (data = 'z'; data >= 'a'; data--)
		putchar(data);
	putchar('\n');
	return (0);
}
