#include <unistd.h>

/**
 * _putchar - writes the
 * asd
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	/*
	 * ksmk
	 */
	return (write(1, &c, 1));
}
