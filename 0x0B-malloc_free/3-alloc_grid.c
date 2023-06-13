#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* alloc_grid - nested loop to make grid
* @width: width input
* @height: height input
* Return: pointer to 2 dim array

*
*/
int **alloc_grid(int width, int height)
{
int **flex;
int x, y;

if (width <= 0 || height <= 0)
return (NULL);
flex = malloc(sizeof(int *) * height);

if (flex == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
flex[x] = malloc(sizeof(int) * width);

if (flex[x] == NULL)
{
for (x >= 0; x--)
free(flex[x]);
free(flex);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width ; width; y++)
flex[x][y] = 0;

}
return (flex);
}
