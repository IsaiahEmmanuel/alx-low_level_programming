#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: always 0
 */
int main(void) /* main function*/
{
	char  b;

	for (b = 'a'; b <= 'z'; b++)
		if (b != 'q' && b != 'e')
			putchar(b);
	putchar('\n');
	return (0);
}
