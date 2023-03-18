#include <stdio.h>
/**
 * main - a C program that prints the size of various types on the computer it is comp
 * iled and run on
 
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long int l;
long long int L;
float f;

printf("Size of a char: %lu bytes(s)\n",(unsigned long)sizeof(c));
printf("Size of a int: %lu bytes(s)\n",(unsigned long)sizeof(i));
printf("Size of a long int: %lu bytes(s)\n",(unsigned long)sizeof(l));
printf("Size of long long int: %lu bytes(s)\n",(unsigned long)sizeof(L));
printf("Size of a float: %lu bytes(s)\n",(unsigned long)sizeof(f));
return (0);
}
