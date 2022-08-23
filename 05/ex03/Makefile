NAME = bureaucrat

SRC = Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp main.cpp 
INCL = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
OBJ =  $(SRC:%.cpp=%.o)

CC = c++
C_FLAGS = -Wall -Wextra -Werror
FLAGS = -std=c++98 $(C_FLAGS)

GREEN = \033[0;32m
RED = \033[0;31m
CROSS = \033[9m
MARK = \033[7m
RESET = \033[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(INCL)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "$(MARK) $(NAME): $(GREEN)$(NAME) was created$(RESET)"

%.o : %.cpp $(INCL)
	$(CC) $(FLAGS) -c $< -o $@
	@echo "\n$(MARK) $(NAME): $(GREEN)object files were created$(RESET)"

clean: 
	@rm -rf $(OBJ)
	@echo "$(RED)$(NAME) obj was deleted$(RESET)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)$(NAME) was deleted$(RESET)"

re: fclean all
