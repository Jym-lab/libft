# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yjoo <yjoo@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 05:36:50 by yjoo              #+#    #+#              #
#    Updated: 2021/11/19 05:36:50 by yjoo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SUFFIXEX = .c .o
CC = gcc
CFLAGS = -Wall -Wextra -Werror
LFLAGS = rc
NAME = libft.a
SRCS = *.c
OBJS = $(SRCS:.c=.o)

.PHONY:all clean fclean re

all: $(NAME)

$(NAME) : $(OBJS)
	ar $(LFLAGS) $@ $?
%.o : %.c
	$(CC) $(CFLAGS) -c $?

clean:
	rm $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
