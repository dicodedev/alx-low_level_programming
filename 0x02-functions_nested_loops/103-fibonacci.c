#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n1, n2;
        long int fn, afn;

	n1 = 1;
	n2 = 2;
	fn = afn = 0;
	while (fn <= 400000)
	{
		fn = n1 + n2;
		n1 = n2;
		n2 = fn;
		if ((n1 % 2) == 0)
		{
			afn += n1;
		}
	}
	printf("%1d\n", afn);
	return (0);
}
