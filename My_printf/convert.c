#include "./my_printf.h"

void        convert_di(va_list ap)
{
    int    nb;

    nb = va_arg(ap, int);
    putnbr(nb);
}

void        convert_s(va_list ap)
{
    char    *str;

    str = va_arg(ap, char*);
    my_putstr(str);
}

void        convert_c(va_list ap)
{
    char    c;

    c = va_arg(ap, int);
    my_putchar(c);
}

void        convert_o(va_list ap)
{
    unsigned int    nb;
    char            *str;

    nb = va_arg(ap, unsigned int);
    str = itoa_base(nb, 8, 'x');
    my_putstr(str);
}
void        convert_u(va_list ap)
{
    unsigned int    nb;
    char            *str;

    nb = va_arg(ap, unsigned int);
    str = itoa_base(nb, 10, 'x');
    my_putstr(str);
}
void        convert_x(va_list ap)
{
    unsigned int    nb;
    char            *str;

    nb = va_arg(ap, unsigned int);
    str = itoa_base(nb, 16, 'x');
    my_putstr(str);
}
void        convert_mx(va_list ap)
{
    unsigned int    nb;
    char            *str;

    nb = va_arg(ap, unsigned int);
    str = itoa_base(nb, 16, 'X');
    my_putstr(str);
}

void        convert_mod(va_list ap)
{
    my_putstr("%");
}