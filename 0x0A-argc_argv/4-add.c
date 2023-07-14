#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int num_check(char *s)
{
	return (isdigit(s));
}

int main(int argc, char *argv[])
{
	int sum = 0, i = 1;

	while (i <= argc)
	{
		if (num_check(argv[i]))
		{
			continue;
		}
		else
		{
			printf("Error\n");
			return (1);
			break;
		}

		sum += atoi(argv[i]);

		i++;
	}
	
	printf("%d\n", sum);

	return (0);
}
