# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ichafiq <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/20 17:25:56 by ichafiq           #+#    #+#              #
#    Updated: 2019/08/22 11:54:30 by ichafiq          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

HEADER = includes

SRCS = ft_putchar.c ft_swap.c ft ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS = ${SRCS: .c=.o}

RM = rm -f

AR = ar rc

CFLAGS = -Wall -Wextra -Werror

CC = gcc

ATTRIBUT = -c

all:		${NAME}

-c.o:
			${CC} ${CFLAGS} ${ATTRIBUT} -c $< -o $(<: .c=.o) -I${HEADER}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

clean:		${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

