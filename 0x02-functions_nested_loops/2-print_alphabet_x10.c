#include <stdio.h>
#include "main.h"
/**
 * main - prints _putchar
 *
 * Return: always 0
 */
void print_alphabet_x10(void);
{
	char *c = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
