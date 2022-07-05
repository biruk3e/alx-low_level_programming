#include "main.h"
void print_alphabet(void);
/**
 *
 * main - prints alphabet
 *
 * Return: always 0
 */
int main(void)
	{
	print_alphabet();
	return (0);
}
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
