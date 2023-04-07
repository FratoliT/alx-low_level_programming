#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an intiger
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int i, d, j, flex, u, digit;

i = 0;
d = 0;
j = 0;
flex = 0;
u = 0;
digit = 0;
while (s[flex] != '\0')
flex++;
while (i < flex && u == 0)
{
if (s[i] == '-')
++d;
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
j = j * 10 + digit;
u = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
u = 0;
}
i++;
}
if (u == 0)
return (0);
return (j);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char *argv[])
{
int result, num1, num2;
if (argc < 3 || argc > 3)
{
printf("error\n");
return (1);
}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 * num2;

printf("%d\n", result);

return (0);
}
