CC = gcc

NAME = my_printf

FLAGS = -Wall -Werror -Wextra

PRINTF_SRC_NAME =	convert.c		\
					itoa_base.c		\
					my_printf.c		\
					my_putchar.c	\
					my_putstr.c		\
					putnbr.c		\
					strlen_c.c		\


PRINTF_SRC = $(addprefix ./, $(PRINTF_SRC_NAME))

PRINTF_OBJ = $(PRINTF_SRC:.c=.o)

OBJ = $(PRINTF_OBJ)

all : $(NAME)

$(NAME) : $(OBJ) $(NAME).a

%.a:
	@ar rc $(NAME).a $(OBJ)
	@ranlib $(NAME).a
	@echo "my_printf compiled"

%.o: %.c
	@$(CC) -c $(FLAGS) $< -o $@

clean :
	@/bin/rm -f $(OBJ)
	@echo "objects have been cleaned"

fclean : clean
	@/bin/rm -f $(NAME).a
	@echo "my_printf deleted"

re : fclean all

.PHONY : all clean fclean re