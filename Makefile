# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 11:18:54 by ypringau          #+#    #+#              #
#    Updated: 2013/12/28 12:41:16 by ypringau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
	ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c   \
	ft_strncat.c ft_strlcat.c ft_atoi.c ft_strrchr.c ft_strstr.c ft_strnstr.c  \
	ft_strcmp.c ft_strncmp.c ft_strchr.c ft_strsub.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_strclr.c ft_isalpha.c ft_strequ.c ft_strnew.c \
	ft_strnequ.c ft_strsub.c ft_strjoin.c ft_toupper.c ft_tolower.c            \
	ft_memalloc.c ft_memdel.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_strdel.c \
	ft_putendl.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c           \
	ft_strtrim.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c      \
	ft_putnbr_fd.c ft_strsplit.c ft_strrev.c ft_tabsort.c ft_lstsort.c         \
	ft_lstnew.c ft_lstiter.c ft_lstdelone.c ft_lstdel.c ft_lstmap.c ft_lstadd.c\
	ft_lst_get_elem_at.c ft_lstadd_end.c get_next_line.c ft_lstswap.c          \
	ft_realloc.c
OBJS = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC) includes/libft.h
	gcc $(FLAGS) -I includes -c $(SRC)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
