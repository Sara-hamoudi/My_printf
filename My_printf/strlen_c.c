#include "my_printf.h"

int		strlen_c(const char *s, char c)
{
	int	i;

	i = 0;
	while ((s[i] != c) && (s[i] != '\0'))
		i++;
	return (i);
}
