
NAME1 = server

NAME2 = client

all:
	@cd ft_printf && make all
	@gcc -Wall -Wextra -Werror server.c ft_printf/libftprintf.a -o $(NAME1)
	@gcc -Wall -Wextra -Werror client.c ft_printf/libftprintf.a -o $(NAME2)

clean:
	@cd ft_printf && make clean
	@rm -f $(NAME1)
	@rm -f $(NAME2)

fclean: clean
	@cd ft_printf && make fclean

re: fclean all