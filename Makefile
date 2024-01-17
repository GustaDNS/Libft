NAME = libft.a
C_SOURCE = $(wildcard ft_*.c)
CC = cc
OBJ = $(C_SOURCE:.c=.o)
FLAG = -Wall -Wextra -Werror


all: $(NAME)

$(NAME):
	$(CC) $(FLAG) -c $(C_SOURCE)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all