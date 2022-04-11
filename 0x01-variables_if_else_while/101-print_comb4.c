#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
for (j = 1; j < 10; j++)
{
for (k = 2; k < 10; k++)
{
if (k > j && j > i)
{

putchar(i);
putchar(j);
putchar(k);

if (i == '7' && j == '8' && k == '9')
	continue;

putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
