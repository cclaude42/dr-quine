NAME = Colleen

CC = clang

CFLAGS = -Wall -Wextra -Werror

SRC = Colleen.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME).out

fclean: clean
	rm -f $(NAME)

re: fclean all

test: re
	./$(NAME) > $(NAME).out
	diff $(SRC) $(NAME).out

.PHONY: clean fclean re test
