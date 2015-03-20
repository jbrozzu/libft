# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrozzu <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/20 14:45:10 by jbrozzu           #+#    #+#              #
#    Updated: 2015/03/20 15:46:22 by jbrozzu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

SOURCES = ft_atoi.c ft_isdigit.c ft_memcpy.c ft_putnbr.c ft_strcpy.c ft_tolower.c \
	ft_bzero.c ft_isprint.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_toupper.c \
  	ft_isalnum.c ft_memccpy.c ft_memset.c ft_putstr.c ft_strlen.c ft_isalpha.c \
	ft_memchr.c ft_putchar.c ft_putstr_fd.c ft_strncmp.c ft_isascii.c \
	ft_putchar_fd.c ft_memcmp.c ft_strcmp.c ft_strncpy.c ft_strcat.c \
	ft_strncat.c ft_strlcat.c ft_strchr.c ft_strstr.c ft_strnstr.c ft_putendl.c \
	ft_putendl_fd.c ft_strrchr.c ft_memdel.c ft_memalloc.c ft_memchr.c \
	ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c \
	ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c \
	ft_strtrim.c ft_itoa.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c \
	ft_lstiter.c ft_strsplit.c ft_lstmap.c ft_sort_int_tab.c ft_ulstr.c \
	ft_wdmatch.c ft_inter.c ft_alloc_tab.c ft_hiddenp.c ft_strndup.c ft_is_space.c \


OBJECTS	= $(subst .c,.o,$(SOURCES))

WFLAGS	= -Wall -Werror -Wextra

.SILENT:

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)
	printf "\e[32m----------------------------------\e[36m\n"
	printf "\e[32m[✔]\e[36m $@"
	printf "\n\e[32m----------------------------------\e[36m"
	printf "\033[0m\n"

%.o: %.c
	$(CC) $(WFLAGS) -c -o $@ $^
	printf "\e[32m[✔]\e[36m $@ "
	printf "\033[0m\n"

clean:
	rm -rf $(OBJECTS)
	printf "\e[31m----------------------------------\n"
	printf "[✔]\e[36m $(NAME): Objects deleted\n"
	printf "\e[31m----------------------------------\e[36m"
	printf "\033[0m\n"

fclean: clean
	rm -rf $(NAME)
	printf "\e[31m----------------------------------\n"
	printf "[✔]\e[36m $(NAME): All deleted\n"
	printf "\e[31m----------------------------------\e[36m"
	printf "\033[0m\n"

re: fclean all

.PHONY: re fclean clean all
