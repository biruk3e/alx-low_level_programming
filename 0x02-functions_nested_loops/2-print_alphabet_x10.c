#include <stdio.h>
#include "main.h"
/**
 * main - prints _putchar
 *
 * Return: always 0
 */
void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
	char character = 'a';
	int j;

	for (j = 0; j < 26; j++)
	{
		_putchar(character);
		character++;
	}
	_putchar('\n');
}
