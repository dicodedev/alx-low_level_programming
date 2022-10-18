#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int counter = 2;

	unsigned long int a = 1;
	unsigned long int b = a + 1;
	unsigned long int c = a + b;

	printf("%" PRId64 ", ", a);
	printf("%ld, ", b);
	while (counter < 98)
	{
		counter++;
		printf("%ld", c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 98)
		{
		printf(", ");
		}
	}
	printf("\n");
	return (0);
}
