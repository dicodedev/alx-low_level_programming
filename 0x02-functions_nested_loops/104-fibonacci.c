#include <stdio.h>
#include <inttypes.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int counter = 2;

	long long int a = 1;
	long long int b = a + 1;
	long long int c = a + b;

	printf("%" PRId64 ", ", a);
	printf("%ld, ", b);
	while (counter < 100)
	{
		counter++;
		printf("%ld", c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 100)
		{
		printf(", ");
		}
	}
	printf("\n");
	return (0);
}
