NAME = Grace

RC = rustc

RFLAGS =

SRC = Grace.rs

KID = Grace_kid.rs

all: $(NAME)

$(NAME):
	$(RC) $(RFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(KID)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: re
	./$(NAME)
	diff $(SRC) $(KID)

.PHONY: clean fclean re test
