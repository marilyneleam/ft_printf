# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleam <mleam@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/16 16:29:53 by mleam             #+#    #+#              #
#    Updated: 2021/08/18 16:02:37 by mleam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a

SRCS_D =	sources/

OBJS_N =	ft_printf.o \
			ft_printf_call.o \
			ft_printf_character_percent.o \
			ft_printf_string.o \
			ft_printf_decimal_integer.o \
			ft_printf_unsigned_integer.o \
			ft_printf_hexa_int_low.o \
			ft_printf_hexa_int_up.o \
			ft_printf_adress.o

OBJS_P =	$(addprefix $(SRCS_D), $(OBJS_N))

LIBFT_D =	libft/

SRCS =		ft_itoa_base.o \
		   	ft_strdup.o \
			ft_strlen.o \
			ft_strrev.o \
			ft_ultoa_base.o

LIBFT_P = $(addprefix $(LIBFT_D), $(LIBFT_N))

INCS	= -I includes/

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

$(NAME):	$(OBJS_P) $(LIBFT_P)
			make -C $(LIBFT_D)
			cp libft/libft.a $(NAME)
			ar -rcs $(NAME) $(OBJS_P)

all:		$(NAME)

clean:
			$(MAKE) clean -C $(LIBFT_D)
			rm -f $(OBJS_P)

fclean:		clean
			$(MAKE) fclean -C $(LIBFT_D)
			rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
