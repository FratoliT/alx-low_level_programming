#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** main -a function that checks if the number is posetive, negative or zero
* return 0 (sucess)
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if(n>0)
{
printf("%d is posetive\n", n);
}
else if(n==0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
	return (0);
}