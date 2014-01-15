# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ypringau <ypringau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 11:18:54 by ypringau          #+#    #+#              #
#    Updated: 2014/01/15 10:47:58 by ypringau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang
CFLAGS = -Wall -Wextra -Werror -I./includes
LDFLAGS =
OBJDIR = .objs
LISTDIR = srcs
DIRSRC = srcs
NAME = libft.a
SRC = $(DIRSRC)/ft_memset.c                 \
	  $(DIRSRC)/ft_bzero.c                  \
	  $(DIRSRC)/ft_memcpy.c                 \
	  $(DIRSRC)/ft_memccpy.c                \
	  $(DIRSRC)/ft_memmove.c                \
	  $(DIRSRC)/ft_memchr.c                 \
	  $(DIRSRC)/ft_memcmp.c                 \
	  $(DIRSRC)/ft_strlen.c                 \
	  $(DIRSRC)/ft_strdup.c                 \
	  $(DIRSRC)/ft_strcpy.c                 \
	  $(DIRSRC)/ft_strncpy.c                \
	  $(DIRSRC)/ft_strcat.c                 \
	  $(DIRSRC)/ft_strncat.c                \
	  $(DIRSRC)/ft_strlcat.c                \
	  $(DIRSRC)/ft_atoi.c                   \
	  $(DIRSRC)/ft_strrchr.c                \
	  $(DIRSRC)/ft_strstr.c                 \
	  $(DIRSRC)/ft_strnstr.c                \
	  $(DIRSRC)/ft_strcmp.c                 \
	  $(DIRSRC)/ft_strncmp.c                \
	  $(DIRSRC)/ft_strchr.c                 \
	  $(DIRSRC)/ft_strsub.c                 \
	  $(DIRSRC)/ft_isdigit.c                \
	  $(DIRSRC)/ft_isalnum.c                \
	  $(DIRSRC)/ft_isascii.c                \
	  $(DIRSRC)/ft_isprint.c                \
	  $(DIRSRC)/ft_strclr.c                 \
	  $(DIRSRC)/ft_isalpha.c                \
	  $(DIRSRC)/ft_strequ.c                 \
	  $(DIRSRC)/ft_strnew.c                 \
	  $(DIRSRC)/ft_strnequ.c                \
	  $(DIRSRC)/ft_strsub.c                 \
	  $(DIRSRC)/ft_strjoin.c                \
	  $(DIRSRC)/ft_toupper.c                \
	  $(DIRSRC)/ft_tolower.c                \
	  $(DIRSRC)/ft_memalloc.c               \
	  $(DIRSRC)/ft_memdel.c                 \
	  $(DIRSRC)/ft_putchar.c                \
	  $(DIRSRC)/ft_putstr.c                 \
	  $(DIRSRC)/ft_putnbr.c                 \
	  $(DIRSRC)/ft_strdel.c                 \
	  $(DIRSRC)/ft_putendl.c                \
	  $(DIRSRC)/ft_striter.c                \
	  $(DIRSRC)/ft_striteri.c               \
	  $(DIRSRC)/ft_strmap.c                 \
	  $(DIRSRC)/ft_strmapi.c                \
	  $(DIRSRC)/ft_strtrim.c                \
	  $(DIRSRC)/ft_itoa.c                   \
	  $(DIRSRC)/ft_putchar_fd.c             \
	  $(DIRSRC)/ft_putstr_fd.c              \
	  $(DIRSRC)/ft_putendl_fd.c             \
	  $(DIRSRC)/ft_putnbr_fd.c              \
	  $(DIRSRC)/ft_strsplit.c               \
	  $(DIRSRC)/ft_strrev.c                 \
	  $(DIRSRC)/ft_tabsort.c                \
	  $(DIRSRC)/ft_lstsort.c                \
	  $(DIRSRC)/ft_lstnew.c                 \
	  $(DIRSRC)/ft_lstiter.c                \
	  $(DIRSRC)/ft_lstdelone.c              \
	  $(DIRSRC)/ft_lstdel.c                 \
	  $(DIRSRC)/ft_lstmap.c                 \
	  $(DIRSRC)/ft_lstadd.c                 \
	  $(DIRSRC)/ft_lst_get_elem_at.c        \
	  $(DIRSRC)/ft_lstadd_end.c             \
	  $(DIRSRC)/get_next_line.c             \
	  $(DIRSRC)/ft_lstswap.c                \
	  $(DIRSRC)/ft_realloc.c                \
	  $(DIRSRC)/ft_dllstnew.c               \
	  $(DIRSRC)/ft_dllstadd_end.c           \
	  $(DIRSRC)/ft_dllstdelitem.c

OBJ = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))

.SILENT:

$(addprefix $(OBJDIR)/, %.o): %.c
	$(CC) $(CFLAGS) -o $@ -c $<
	printf '\033[0;32mBuilding C Object $@\n\033[0m' "Building C Object $@"

$(NAME): $(OBJDIR) $(OBJ)
	ar rc $(NAME) $(OBJ) $(LDFLAGS)
	printf '\033[1;31m%s \033[1;35m%s \033[1;33m%s\n\033[0m' "Lib created" "$(NAME)"

clean:
	/bin/rm	-fr $(OBJDIR)
	printf '\033[1;34m%s\n\033[0m' "Clean project $(NAME)"

fclean: clean
	/bin/rm -fr $(NAME)
	printf '\033[1;34m%s\n\033[0m' "Fclean project $(NAME)"

re: fclean all

all: $(NAME)

$(OBJDIR):
	/bin/mkdir $(OBJDIR);			\
	for DIR in $(LISTDIR);			\
	do								\
		/bin/mkdir $(OBJDIR)/$$DIR;	\
	done							\

.PHONY: clean fclean re

