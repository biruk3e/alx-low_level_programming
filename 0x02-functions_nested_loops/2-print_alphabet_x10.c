#include "main.h"
/**
 * print_alphabet_10x - prints alphabet
 *
 * Return: always 0
 */
void print_alphabet_10x(void)
{
	int i;

	for (i = 0; i < 10; i++)
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
}
/**
 * main - prints main
 *
 * Return: always 0
 */
int main(void)
{
	print_alphabet_10x();
	return (0);
}


