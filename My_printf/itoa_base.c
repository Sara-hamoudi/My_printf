#include "./my_printf.h"

static int		ft_count(unsigned int nbr, int base)
{
	int		count;

	count = 0;
	while (nbr > 0)
	{
		nbr /= base;
		count++;
	}
	return (count);
}

char			*itoa_base(unsigned int nbr, int base, char c)
{
	int		count;
	char	*str;
	char	*tab;

	count = ft_count(nbr, base);
	if (c == 'X')
		tab = "0123456789ABCDEF";
	else
		tab = "0123456789abcdef";
	if (!(str = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	str[count] = '\0';
	while (nbr != 0)
	{
		str[--count] = tab[(nbr % base)];
		nbr /= base;
	}
	return (str);
}
