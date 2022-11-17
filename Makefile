# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 12:15:00 by gd-harco          #+#    #+#              #
#    Updated: 2022/11/17 16:49:13 by gd-harco         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

#Variables
NAME = libft.a
CC = gcc
CFLAG =-c -Wall -Werror -Wextra
ARCHIVE = ar -r $(NAME) $(OBJS)

SRCS = 	ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strmapi.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c\

SRCS_BONUS = ft_lstnew.c\
			 ft_lstadd_front.c\
			 ft_lstsize.c\
			 ft_lstlast.c\
			 ft_lstadd_back.c\
			 ft_lstdelone.c\
			 ft_lstclear.c\
			 ft_lstiter.c\
			 ft_lstmap.c

HEADER = libft.h
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)


all: $(NAME)

.c.o: %.c ${OBJS} Makefile ${HEADER}
	$(CC) $(CFLAG) $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	$(ARCHIVE)

bonus: $(NAME)
	$(CC) $(CFLAG) $(SRCS_BONUS)
	ar -q $(NAME) $(OBJS_BONUS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAG) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)
