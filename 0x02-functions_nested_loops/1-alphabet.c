#include "main.h"
/**
 * main - prints alphabet
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char character = 'a';
	int i = 0;

	for (i = 0; i < 26; i++);
	{
		_putchar(character);
		character++;
	}
	_putchar('\n');
}

int main(void)
	{
	print_alphabet();
	return 0;
}
