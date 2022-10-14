#include <stdio.h>

/**
 * main - Entry point
 * author: Divine John
 * Return: Always 0 (Success)
 */
int main(void)
{
	int divine;
	char john;

	for (divine = 48; divine < 58; divine++)
		putchar(divine);
	for (john = 'a'; john <= 'f'; john++)
		putchar(john);
	putchar('\n');
	return (0);
}
