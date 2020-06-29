#ifndef MY_PRINTF_H
# define MY_PRINTF_H


# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int         g_return;

int 	    strlen_c(const char *s, char c);
void        convert_di(va_list ap);
void        convert_s(va_list ap);
void        convert_c(va_list ap);
void        convert_o(va_list ap);
void        convert_u(va_list ap);
void        convert_x(va_list ap);
void        convert_mx(va_list ap);
void        convert_mod(va_list ap);
void	    putnbr(int n);
void        my_putchar(const char c);
char		*itoa_base(unsigned int nbr, int base, char c);
void	    my_putstr(char const *s);
void	    my_putstr_len(const char *str, int len);

#endif