#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, k;

	for (n = 48; n <= 56; n++)
	{
		for (k = 49; k <= 57; m++)
		{
			if (k > n)
			{
				putchar(n);
				putchar(k);
				if (n != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
