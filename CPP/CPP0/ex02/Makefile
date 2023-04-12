NAME	=	account

SRCS	=	tests.cpp \
			Account.cpp

OBJS	= $(SRCS:.cpp=.o)

CP		= c++

PFLAGS	= -std=c++98 -I. -g -Wall -Werror -Werror

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