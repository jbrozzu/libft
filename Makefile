# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbrozzu <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/04 13:16:57 by jbrozzu           #+#    #+#              #
#    Updated: 2015/03/17 18:59:08 by jbrozzu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_isdigit.c ft_memcpy.c ft_putnbr.c ft_strcpy.c ft_tolower.c \
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
	ft_wdmatch.c ft_inter.c ft_alloc_tab.c ft_hiddenp.c ft_strndup.c


SRCO = ft_atoi.o ft_isdigit.o ft_memcpy.o ft_putnbr.o  ft_strcpy.o \
	ft_tolower.o ft_bzero.o ft_isprint.o ft_memmove.o ft_putnbr_fd.o \
	ft_strdup.o ft_toupper.o ft_isalnum.o ft_memccpy.o ft_memset.o \
	ft_putstr.o ft_strlen.o ft_isalpha.o ft_memchr.o ft_putchar.o \
	ft_putstr_fd.o ft_strncmp.o ft_isascii.o ft_putchar_fd.o ft_memcmp.o \
	ft_strcmp.o ft_strncpy.o ft_strcat.o ft_strncat.o ft_strlcat.o \
	ft_strchr.o ft_strstr.o ft_strnstr.o ft_putendl.o ft_putendl_fd.o \
	ft_strrchr.o ft_memdel.o ft_memalloc.o ft_memchr.o ft_strnew.o \
	ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o \
	ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o \
	ft_strtrim.o ft_itoa.o ft_lstnew.o ft_lstdelone.o ft_lstdel.o \
	ft_lstadd.o ft_lstiter.o ft_strsplit.o ft_lstmap.o ft_sort_int_tab.o \
	ft_ulstr.o ft_wdmatch.o ft_inter.o ft_alloc_tab.o ft_hiddenp.o \
	ft_strndup.o

all: $(NAME)

$(NAME):
	@echo "\n ############  Creation des fichiers .o  ############ \n"
	@gcc -Wextra -Werror -Wall -c $(SRC) -I .
	@echo "\n ###########  Compilation de la librairie  ########### \n"
	@ar rc $(NAME) $(SRCO)

exe:
	@echo "\n ##########  Creation de l'executable TEST  ########## \n"
	@gcc test.c -L. -I . -lft

clean:
	@echo "\n ##########  Suppression des fichiers .o  ########## \n"
	@rm -f $(SRCO)

fclean:
	@echo "\n ###  Suppression des fichiers .o et de la librairie  ### \n"
	@rm -f $(NAME) $(SRCO)

re : fclean all
