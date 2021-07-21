NAME = Colleen

CC = clang

CFLAGS = -Wall -Wextra -Werror

SRC = Colleen.c

OUT = Colleen.out

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(OUT)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: re
	./$(NAME) > $(OUT)
	diff $(SRC) $(OUT)

.PHONY: clean fclean re test
