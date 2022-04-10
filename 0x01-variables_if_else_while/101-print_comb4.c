#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int i, j, k;
for (i = 2; i < 12; i++)
{
for (j = 3; j < 12; j++)
{
for (k = 4; k < 12; k++)
{
if (k > j && j > i)
{
putchar(i, j, k);
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
