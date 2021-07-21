NAME = Grace

CC = clang

CFLAGS = -Wall -Wextra -Werror

SRC = Grace.c

KID = Grace_kid.c

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(KID)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: re
	./$(NAME)
	diff $(SRC) $(KID)

.PHONY: clean fclean re test
