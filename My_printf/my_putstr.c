#include "./my_printf.h"

void	my_putstr(char const *s)
{
	int		i;

	i = -1;
	while (s[++i])
		my_putchar(s[i]);
}

void	my_putstr_len(const char *str, int len)
{
	write(1, str, len);
	g_return = g_return + len;
}
