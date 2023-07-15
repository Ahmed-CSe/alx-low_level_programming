#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *  * num_check - check - string there are digit
 *   * @s: array str
 *    *
 *     * Return: Always 0 (Success)
 */

int num_check(char *str)
{
	return (isdigit(str));
}

/**
 *  * main - Print the name of the program
 *   * @argc: Count arguments
 *    * @argv: Arguments
 *     *
 *      * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int k;

	i = 1;

	while (i < argc)
	{
		if (!num_check(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			k = atoi(argv[i]);
			sum += k;
		}
		i++;
	}

	printf("%d\n", sum);

	return (0);
}
