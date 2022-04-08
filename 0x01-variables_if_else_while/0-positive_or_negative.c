#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - entry point
 *
 * Return: Always 0 (Success/correct)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n==0)
{
printf("%i is Zero\n", n);
}
else if (n<0)
{
printf("%i is negative\n");
}
else
{
printf("%i is positive\n");
}

return(0);

}
