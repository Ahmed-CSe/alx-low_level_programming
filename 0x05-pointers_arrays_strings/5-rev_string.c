#include <stdio.h>

/**
 * rev_string - reverses a
 *
 * @s: adm asdn
 * 
 * Return: Nothing
 */
void rev_string(char *s)
{
	int l, i;
	char temp;

	/*ksmk daks asdk a*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	/*askdm askmdaskdm a dksm*/
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i]; /*-1 becad asd asd as 0*/
	}
}
