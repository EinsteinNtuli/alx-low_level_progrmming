#include "main.h"

/**
 *
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	i = 0;

	while (i < 11)
	{
		char r;

		for (r = 'a'; r <= 'z'; r++)
		{
			_putchar(r);
		}
		_putchar('\n');
		i++;
	}
}
