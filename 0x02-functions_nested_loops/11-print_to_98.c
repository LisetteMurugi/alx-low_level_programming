#include <stdio.h>
	#include "main.h"


/**
* print_to_98 - prints all natural numbers from n to 98,
* followed by a new line
* @n: print from this number
*/
void print_to_98(int n)
	{
		int m, p;


		if (n <= 98)
		{
			for (m = n; m <= 98; m++)
			{
				if (m != 98)
					printf("%d, ", m);
				else if (m == 98)
					printf("%d\n", m);
			}
		} else if (n >= 98)
		{
			for (p = n; p >= 98; p--)
			{
				if (p != 98)
					printf("%d, ", p);
				else if (p == 98)
					printf("%d\n", p);
			}
		}
	}
