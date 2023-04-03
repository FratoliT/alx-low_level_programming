#include "main.h"
/**
 * leet - encodes a string into 1337
 * @n: input
 * Return: thr value of n
 */

char *leet(char *n)
{
	int i, j;
	char s1[] = "AEOTLaeotl";
	char s2[] = "4307143071";

	for (i = 0; n[i] != '\10'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
