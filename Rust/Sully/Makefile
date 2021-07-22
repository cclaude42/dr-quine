NAME = Sully

RC = rustc

RFLAGS =

SRC = Sully.rs

all: $(NAME)

$(NAME):
	$(RC) $(RFLAGS) -o $(NAME) $(SRC)

clean:
	rm -rf $(NAME)_*

fclean: clean
	rm -f $(NAME)

re: fclean all

test: re
	./$(NAME)
	-diff $(SRC) $(NAME)_0.rs
	-diff $(NAME)_3.rs $(NAME)_2.rs

.PHONY: clean fclean re test
