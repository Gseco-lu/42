NAME	= phonebook

SRCS	=	phonebook.cpp	\
			Contact.cpp		\
			main.cpp

OBJS	= $(SRCS:.cpp=.o)

CP		= c++

PFLAGS	= -Wall -Werror -Werror -std=c++98

all:	$(NAME)

%.o: %.cpp
	@$(CP) $(PFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
		@$(CP) $(PFLAGS) $(OBJS) -o $(NAME)

clean:	
		@rm -f $(OBJS)

fclean:	clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean