NAME	= megaphone

SRCS	= megaphone.cpp

OBJS	= $(SRCS:.cpp=.o)

CC		= c++

PFLAGS	= -Wall -Werror -Werror -std=c++98

all:	$(NAME)

%.o: %.cpp
	@$(CC) $(PFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
		@$(CC) $(PFLAGS) $(OBJS) -o $(NAME)

clean:	
		@rm -f $(OBJS)

fclean:	clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean