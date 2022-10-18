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

	printf("%1d, ", a);
	printf("%1d, ", b);
	while (counter < 98)
	{
		counter++;
		printf("%1d", c);
		a = b;
		b = c;
		c = a + b;
		printf(", ");
	}
	printf("\n");
	return (0);
}
