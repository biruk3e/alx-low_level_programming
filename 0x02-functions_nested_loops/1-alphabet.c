#include "main.h"
/**
 * main - prints puthcar
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char character = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
	_putchar(character);
	character++;
	}
	_putchar('\n');
}
