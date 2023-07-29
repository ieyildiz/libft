# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iyildiz <yildiz.ie58@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/28 14:35:51 by iyildiz           #+#    #+#              #
#    Updated: 2023/07/28 14:35:51 by iyildiz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= libft.a
CFLAGS 		= -Wall -Werror -Wextra -I. -c
FILES		= ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_strlen.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strcpy.c \
				ft_strdup.c \
				ft_strcat.c \
				ft_strncat.c \
				ft_strlcat.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strnstr.c \
				ft_strncmp.c \
				ft_atoi.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_isascii.c \
				ft_striteri.c \
				ft_strmapi.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_strsplit.c \
				ft_itoa.c \
				ft_putchar_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
OBJ			= $(FILES:%.C=%.O)

all: $(NAME)

copy:
		cp -f libc-func/*.c .
		cp -f add-func/*.c .
		cp -f test/*.c .

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)
	
$(OBJ): $(FILES)
		gcc $(CFLAGS) $(FILES)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re 