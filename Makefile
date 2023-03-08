
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c \
			ft_printf_char.c \
			ft_printf_int.c \
			ft_printf_hexlow.c \
			ft_printf_hexupp.c \
 			ft_printf_ptr.c \
			ft_printf_str.c \
			ft_printf_undec.c \

LIBFT_SRC = $(wildcard libft/*.c)
OBJ = $(SRC:%.c=%.o) $(LIBFT_SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
