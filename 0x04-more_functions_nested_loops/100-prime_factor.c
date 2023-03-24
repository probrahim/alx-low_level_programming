#include <stdio.h>
/**
 * main - prints the largest prime factor of the numbre 612852475143
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
long int i,n,d;
n=612852475143;
for(i=1; i <=n;i++)
{
if (n % i == 0)
{
if (n == 1)
{
printf("%Id\n",i);
break;
}
d = n / i;
n = d;
i = 1;
}
}
return (0);
}
