NAME = Colleen

RC = rustc

RFLAGS = 

SRC = Colleen.rs

OUT = Colleen.out

all: $(NAME)

$(NAME):
	$(RC) $(RFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(OUT)

fclean: clean
	rm -f $(NAME)

re: fclean all

test: re
	./$(NAME) > $(OUT)
	diff $(SRC) $(OUT)

.PHONY: clean fclean re test
