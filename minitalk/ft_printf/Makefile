# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gseco-lu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 16:40:07 by gseco-lu          #+#    #+#              #
#    Updated: 2022/02/08 18:13:21 by gseco-lu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ./ft_printf.c ./ft_printf_c.c ./ft_printf_d.c ./ft_printf_p.c ./ft_printf_s.c ./ft_printf_u.c ./ft_printf_utils.c ./ft_printf_x.c ./ft_printf_xx.c

OBJ = ${SRC:.c=.o}

NAME = libftprintf.a

HEAD = includes

GCC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar rcs

RANLIB = ranlib

.c.o:
				${GCC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${HEAD}

${NAME}:${OBJ}
				${AR} ${NAME} ${OBJ}
				${RANLIB} ${NAME}

all:	${NAME}

clean:
				${RM} ${OBJ}

fclean: clean
				${RM} ${NAME}

re:				fclean all

norm:
				norminette -R CheckForbiddenSourceHeader *.c
				norminette -R CheckDefine *.h
