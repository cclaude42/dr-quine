NAME = Sully

CC = clang

CFLAGS = -Wall -Wextra -Werror

SRC = Sully.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
