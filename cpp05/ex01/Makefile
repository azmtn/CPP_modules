HEADER = Bureaucrat.hpp Form.hpp
NAME = Form
SRC = Bureaucrat.cpp Form.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp	${HEADER}
	@clang++ $(FLAGS) -I. -c $< -o ${<:.cpp=.o}

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
.PHONY:	all clean fclean re