#include "main.h"

/**
 * puts2 - adsklmadkasd l samkl
 *
 * @str: daskjdsajicj a sdjp ad
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
