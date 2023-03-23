# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hle <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 13:27:35 by hle               #+#    #+#              #
#    Updated: 2023/03/23 11:08:41 by hle              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Sources files compile for mandatory part
SRCS = ft_printf.c ft_putstr.c\
	ft_printf_nbr.c ft_puthex.c\
	ft_printf_ptr.c ft_strlcpy.c 

# Object files compile for mandatory part
OBJS = ${SRCS:.c=.o}
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
LIBC = ar rcs
RM = rm -f

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}
	
fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
