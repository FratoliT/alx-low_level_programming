#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size assign char
 * @: size of array
 * @size: size of array
 * Description: create array of size and assign char c
 * Return: pointer to array, NULL is fail
 *
 */
char *create_array(unsigned int size, char c)
{

char *array = malloc(size);

if (size == 0 || array == 0)
return (NULL);
else(size--);
array[size] = c;

return (array);

}
