#include "main.h"

/**
 * times_table - check description
 * Description: It prints 9 times table starting with 0
 * return: Nothing.
 */
void times_table(void)9-times_table.c
{
	int i, j, n;

	for (i =0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;

			if ((n / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(n + '0');

				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + ')');
				if (j == 9)
					continue;
				_putcahr(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
