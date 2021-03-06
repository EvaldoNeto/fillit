#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eneto <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/19 19:12:31 by eneto             #+#    #+#              #
#    Updated: 2018/04/19 19:44:55 by eneto            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

LIB_NAME = libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRCS =	ft_isdigit.c		\
		ft_lstdelone.c		\
		ft_memccpy.c		\
		ft_memset.c			\
		ft_putnbr_fd.c		\
		ft_strclr.c			\
		ft_striter.c		\
		ft_strmapi.c		\
		ft_strnstr.c		\
		ft_tolower.c		\
		ft_atoi.c			\
		ft_isprint.c		\
		ft_lstiter.c		\
		ft_memchr.c			\
		ft_putchar.c		\
		ft_putstr.c			\
		ft_strcmp.c			\
		ft_striteri.c	 	\
		ft_strncat.c		\
		ft_strrchr.c		\
		ft_toupper.c		\
		ft_bzero.c			\
		ft_itoa.c			\
		ft_lstmap.c			\
		ft_memcmp.c			\
		ft_putchar_fd.c		\
		ft_putstr_fd.c		\
		ft_strcpy.c			\
		ft_strjoin.c		\
		ft_strncmp.c		\
		ft_strsplit.c		\
		ft_isalnum.c    	\
		ft_lstadd.c			\
	    ft_lstnew.c			\
	    ft_memcpy.c			\
	    ft_putendl.c		\
	    ft_showbits.c    	\
		ft_strdel.c			\
	    ft_strlcat.c		\
	    ft_strncpy.c		\
	    ft_strstr.c			\
		ft_isalpha.c		\
		ft_memdel.c    		\
		ft_putendl_fd.c   	\
		ft_strcat.c			\
	    ft_strdup.c			\
	    ft_strlen.c			\
	    ft_strnequ.c		\
	    ft_strsub.c			\
		ft_isascii.c		\
	    ft_lstdel.c			\
	    ft_memalloc.c		\
	    ft_memmove.c		\
	    ft_putnbr.c    		\
		ft_strchr.c   		\
		ft_strequ.c			\
	    ft_strmap.c			\
	    ft_strnew.c			\
	    ft_strtrim.c

OBJ = $(SRCS:.c=.o)

INC = ./

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) -c $? $(SRCS)
	@ar rc $(NAME) $? $(OBJ)
	@ranlib $(NAME)
	@echo "\033[32mBuilt library.\033[0m"	

main:
	@$(CC) $(FLAGS) $(LIB_NAME) -o $(NAME)

lib: $(OBJ)
	@ar ruv $(LIB_NAME) $(OBJ)
	@ranlib $(LIB_NAME)

%.o: $(SRCS)%.c
	@$(CC) -I $(INC) $(FLAGS) -c $< -o $@

so:
	@$(CC) $(FLAGS) -fPIC -c $(SRCS)
	@$(CC) -shared -o libft.so $(OBJ)	

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME) $(LIB_NAME) libft.so

re: fclean all