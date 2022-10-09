# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucimart <lucimart@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/03 17:03:05 by lucimart          #+#    #+#              #
#    Updated: 2022/10/08 21:45:32 by lucimart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
SRCS = ft_strdup.c \
	   ft_substr.c \
	   ft_strtrim.c \
	   ft_strmap.c \
	   ft_strlen.c \
	   ft_putstr_fd.c \
	   ft_strjoin.c \
	   ft_memset.c \
	   ft_putnbr.c \
	   in_set.c \
	   ft_itoa.c \
	   ft_putstr.c \
	   ft_striteri.c \
	   ft_striter.c \
	   ft_split.c \
	   ft_strnew.c \
	   ft_memalloc.c \
	   ft_putnbr_fd.c \
	   ft_putendl.c \
	   ft_putchar_fd.c \
	   ft_strdel.c \
	   ft_memdel.c \
	   ft_strequ.c \
	   ft_bzero.c \
	   ft_putchar.c \
	   ft_strnequ.c \
	   ft_strclr.c \
	   ft_putendl_fd.c \
	   ft_strmapi.c \
	   ft_calloc.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strncpy.c \
	   ft_strlcpy.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_atoi.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strncmp.c \
	   ft_strnstr.c \
	   ft_maxtoa.c \
	   ft_umaxtoa.c \
	   ft_strlcat.c \
	   get_next_line_utils.c \
	   get_next_line.c \
	   strtoint.c \
	   includes_int.c \
	   has_duplicated_int.c \
	   amount_of_int_in_arr.c \
	   double_pointer_len.c \
	   strarrjoin.c \
	   str_arr_to_int_arr.c
HEADER = libft.h get_next_line.h
FLAGS = -g -Wall -Wextra -Werror
OBJ = $(SRCS:.c=.o)
BON_SRC = ft_lstnew.c \
		  ft_lstadd_front.c \
		  ft_lstsize.c \
		  ft_lstlast.c \
		  ft_lstadd_back.c \
		  ft_lstdelone.c \
		  ft_lstclear.c \
		  ft_lstiter.c \
		  ft_lstmap.c
BON_OBJ = $(SRCS:.c=.o) $(BON_SRC:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

bonus: $(BON_OBJ)
	ar rc $(NAME) $(BON_OBJ)

clean:
	/bin/rm -f *.o
	/bin/rm -f *.gch
	/bin/rm -f *.out

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

%.o: %.c $(HEADER)
	$(CC) -c $(FLAGS) -o $@ $<
