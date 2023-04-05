#include "main.h"
/**
 * _puts_recursion - print a string followed by a new line
 * @s: the string to print
 * Return: 0
 */

void _puts_recursion(char *s)
{
s = "\0";
if (*s == '\0')
{
_putchar('\n');
return;
}

_putchar (*s);
s++;
_puts_recursion (s);
}
