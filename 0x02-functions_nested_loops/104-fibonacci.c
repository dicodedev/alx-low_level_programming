#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int counter = 2;

	long int a = 1;
	long int b = a + 1;
	long int c = a + b;

	printf("%1ld, ", a);
	printf("%1ld, ", b);
	while (counter < 98)
	{
		counter++;
		printf("%1ld", c);
		a = b;
		b = c;
		c = a + b;
		printf(", ");
	}
	printf("\n");
	return (0);
}
