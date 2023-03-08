
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
FT_FCS = $(wildcard ft*.c)
OBJ = $(FT_FCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $<
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJ)
	ar rcs $(NAME) $(OBJ)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(FT_FCS)
	gcc -nostartfiles -shared -o libft.so $(OBJ)
