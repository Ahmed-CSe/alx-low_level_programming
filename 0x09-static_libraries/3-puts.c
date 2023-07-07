#include <stdio.h>

/**
 * _puts - dasd asd, dasdgha
 *
 * @str: dsad asdg a
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
