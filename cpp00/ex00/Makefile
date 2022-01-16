SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
NAME = megaphone
FLAGS = -Wall -Wextra -Werror -std=c++98

.PHONY:	all, clean, fclean, re

all: $(NAME)

$(NAME): $(OBJ)
	@clang++ $(FLAGS) $(OBJ) -o $(NAME)
	@echo "$(NAME) compiled successfully"

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted successfully"

re:	fclean all