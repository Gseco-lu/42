CC			= 	g++ -std=c++98
CFLAGS		= 	-Wall -Wextra -Werror -Wshadow  -g\
				# -fsanitize=address
NAME		= 	aform
SRCS		=	Bureaucrat.cpp\
				main.cpp\
				AForm.cpp\
				PresidentialPardonForm.cpp\
				RobotomyRequestForm.cpp\
				ShrubberyCreationForm.cpp



all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) $(SRCS) -I. -o $(NAME)

fclean:
	@rm -rf $(NAME)
	@rm -rf *_shrubbery

re: fclean all

clr:
	@clear

e: clr re clr
	@./$(NAME)

.PHONY: all fclean re e cls