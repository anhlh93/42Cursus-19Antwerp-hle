# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hle <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 15:07:02 by hle               #+#    #+#              #
#    Updated: 2023/09/20 15:07:02 by hle              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

INC = minitalk.h

CSRC = client.c
CSRC_OBJ = ${CSRC:.c=.o}

SSRC = server.c
SSRC_OBJ = ${SSRC:.c=.o}

CNAME = client

BNSSERVER = server_bonus.c
BNSCLIENT = client_bonus.c

SNAME = server

all: $(CNAME) $(SNAME)

$(CNAME): $(CSRC_OBJ) $(INC)
	$(CC) $(CFLAGS) $(CSRC_OBJ) -o $(CNAME)
$(SNAME): $(SSRC_OBJ) $(INC)
	$(CC) $(CFLAGS) $(SSRC_OBJ) -o $(SNAME)

clean:
	@rm -rf $(SSRC_OBJ) $(CSRC_OBJ)

fclean: clean
	@rm -rf $(CNAME) $(SNAME)

bonus: $(BNSCLIENT) $(BNSSERVER)
	$(CC) $(CFLAGS) $(BNSCLIENT) -o $(CNAME)
	$(CC) $(CFLAGS) $(BNSSERVER) -o $(SNAME)

re: fclean all
