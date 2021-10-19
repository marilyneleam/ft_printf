# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleam <mleam@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/15 06:33:08 by mleam             #+#    #+#              #
#    Updated: 2021/08/23 12:20:01 by mleam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_itoa_base.o \
	   ft_strdup.o \
	   ft_strlen.o \
	   ft_strrev.o \
	   ft_putchar.o \
	   ft_putstr.o \
	   ft_ultoa_base.o

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

$(NAME):	$(SRCS)
			ar rcs $(NAME) $(SRCS)

all:		$(NAME)

clean:
			$(RM) $(SRCS)

fclean:		clean
			$(RM) $(NAME)

re:
			fclean all


.PHONY:
			all clean fclean re
