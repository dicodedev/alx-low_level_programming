#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int counter = 2;

	int a = 1;
	int b = a + 1;
	int c = a + b;

	printf("%d, ", a);
	printf("%d, ", b);
	while (counter < 98)
	{
		counter++;
		printf("%d", c);
		a = b;
		b = c;
		c = a + b;
		printf(", ");
	}
	printf("\n");
	return (0);
}
