#include "./my_printf.h"

void		ptr_function(void (*((*set_up)[]))(va_list))
{
	(*set_up)[0] = &convert_di;
	(*set_up)[1] = &convert_di;
	(*set_up)[2] = &convert_c;
	(*set_up)[3] = &convert_s;
	(*set_up)[4] = &convert_o;
	(*set_up)[5] = &convert_u;
	(*set_up)[6] = &convert_x;
	(*set_up)[7] = &convert_mx;
	(*set_up)[8] = &convert_mod;
}

void        print_arg(char *opt, va_list ap)
{
    void	(*set_up[9])(va_list);
    char    *str = "dicsouxX%";
    int     i = 0;

    ptr_function(&set_up);
    while (opt[1] != str[i] && str[i] != '\0')
		i++;
    if (str[i] == '\0')
        exit(write(1, "\nEXIT_FAILURE : wrong '%'.\n", 27));
	set_up[i](ap);
}

int         print(const char *format, va_list ap, char *tmp, char *tmp2)
{
    char    opt[3];

    if (strchr(format, '%') == NULL)
    {
        my_putstr(format);
        return (1);
    }
    tmp = strcpy(tmp, format);
    my_putstr_len(tmp, strlen_c(tmp, '%'));
    tmp2 = strcpy(tmp2,strchr(tmp, '%'));
    memcpy(opt, tmp2, 2);
    print_arg(opt, ap);
    print(tmp2 + sizeof(char) * 2, ap, tmp, tmp2);
    return(1);
}

int         my_printf(const char *format, ...)
{
    va_list             ap;

    g_return = 0;
	va_start(ap, format);
    char    *tmp;
    char    *tmp2;
    if ((tmp = (char *)malloc(sizeof(char) * strlen(format))) == NULL)
        exit(write(1, "\nEXIT_FAILURE : malloc fail.\n", 29));
    if ((tmp2 = (char *)malloc(sizeof(char) * strlen(format))) == NULL)
        exit(write(1, "\nEXIT_FAILURE : malloc fail.\n", 29));
    print(format, ap, tmp, tmp2);
	va_end(ap);

    return (g_return);
}


