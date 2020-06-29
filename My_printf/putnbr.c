#include "./my_printf.h"

void	putnbr(int n)
{
	if (n < 0)
	{
		if (n != -2147483648)
		{
			my_putchar('-');
			n *= -1;
		}
		else
		{
			my_putchar('-');
			my_putchar('2');
			n = 147483648;
		}
	}
	if (n > 9)
	{
		putnbr(n / 10);
		n = n % 10;
	}
	my_putchar(n + '0');
}
