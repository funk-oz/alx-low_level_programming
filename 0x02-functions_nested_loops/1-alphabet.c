#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by new line
 */

int main(void)
{

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
}
