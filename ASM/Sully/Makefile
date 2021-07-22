NAME = Sully

CC = clang

CFLAGS = -Wall -Wextra -Werror

SRC = Sully.s

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
	-diff $(SRC) $(NAME)_0.s
	-diff $(NAME)_3.s $(NAME)_2.s

.PHONY: clean fclean re test
