NAME = Sully

CC = clang

CFLAGS = -Wall -Wextra -Werror

SRC = Sully.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	rm -rf $(NAME)_*

fclean: clean
	rm -f $(NAME)

re: fclean all

test: re
	./$(NAME)
	-diff $(SRC) $(NAME)_0.c
	-diff $(NAME)_3.c $(NAME)_2.c

.PHONY: clean fclean re test
