NAME = Grace

CC = clang

CFLAGS = -Wall -Wextra -Werror

SRC = Grace.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)_kid.c

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
