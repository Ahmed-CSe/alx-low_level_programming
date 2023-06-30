#include "main.h"
#include <stdio.h>

/**
*isPrintableASCII - decerementsda asd my ass
*@n: integer
*Return: 1 if true, 0 is not
*/

int isPrintableASCII(int n)
{
  return (n>= 32 && n <= 126);
}

/**
*printHexes - ajsndas
*@b: dasdas
*@start: dasad
*@end: adsad
*/
void printHexes(char *b,int start, int end)
{
  int i = 0;
while (i < 10)
{
if (i < end)
  printf("%02x", *(b + start + i));
else
  printf("  ");
