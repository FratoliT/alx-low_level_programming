#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * check_num - checks string
 * @str: array str
 * Return: 0 (success)
 */
int check_num(char *str)
{
	unsigned int count;
	count = 0;
	while (count < strlen(str))
	{
		if (!digit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 * main - print name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{


int sum = 0;
int str_int;
int count;

count = 1;
while (count < argc)
{

	if (check_num(argv[count]))
	{
		str_int = atoi(argv[count]);
		sum += str_int;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
count++;
}
printf("%d\n", sum);

return (0);
}
