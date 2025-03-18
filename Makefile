# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/11 19:02:25 by yosherau          #+#    #+#              #
#    Updated: 2025/03/18 17:43:03 by yosherau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	so_long.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	so_long

CC		=	cc

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) libmlx.a $(OBJS) -I /opt/X11/include -L /opt/X11/lib -lX11 -lXext

%.o:		%.c
			$(CC) -c -Imlx $< -o $@