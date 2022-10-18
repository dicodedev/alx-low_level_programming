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
	while (counter < 100)
	{
		counter++;
		printf("%1ld", c);
		a = b;
		b = c;
		c = a + b;
		if(counter < 100)
		{
		printf(", ");
		}
	}
	printf("\n");
	return (0);
}
