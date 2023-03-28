#include "main.h"

/**
 * puts_half - Function prints one character out of two
 * starting with the first one
 * @str - string input
 * Return: print
 */

void puts_half(char *str)
{
int i = 0;

for (; str[i] != '\0'; i++)
{
if ((i % 2) == 0)
_putchar(str[i]);
else
continue;
}
_putchar('\n');

}
