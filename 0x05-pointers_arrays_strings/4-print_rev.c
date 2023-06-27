#include <stdio.h>

/**
 * print_rev - dasdas das dasd a
 * @s: sdads asda
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar (s[i]);
	}
	_putchar('\n');
}
