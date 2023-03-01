# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 09:28:46 by yoel-bas          #+#    #+#              #
#    Updated: 2022/11/13 00:15:23 by yoel-bas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc
CFLAGS = -Werror -Wall -Wextra
NAME = libftprintf.a
SRC = ft_putnbr.c \
	  ft_putu.c \
	  ft_hexa.c \
	  ft_puthex.c \
	  ft_putstr.c \
	  ft_putchar.c \
	  ft_printf.c 

      
OBJ = ${SRC:.c=.o}


all : ${NAME}

${NAME} : ${OBJ}
	ar -rc ${NAME} ${OBJ}

%.o : %.c printf.h
	${CC} ${CFLAGS} -c $<

fclean : clean
	rm -f ${NAME}

clean :
	rm -f ${OBJ}

re : fclean all