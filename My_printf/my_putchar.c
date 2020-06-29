#include "./my_printf.h"

void	my_putchar(const char c)
{
	write(1, &c, 1);
	g_return++;
}
