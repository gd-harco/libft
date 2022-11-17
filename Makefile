# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 17:46:58 by gd-harco          #+#    #+#              #
#    Updated: 2022/11/17 21:28:29 by gd-harco         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -c -Wall -Werror -Wextra
NAME = libft.a
HEADER = libft.h
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
		ft_toupper.c
SRCS_BONUS = ft_lstnew_bonus.c\
			 ft_lstadd_front_bonus.c\
			 ft_lstsize_bonus.c\
			 ft_lstlast_bonus.c\
			 ft_lstadd_back_bonus.c\
			 ft_lstdelone_bonus.c\
			 ft_lstclear_bonus.c\
			 ft_lstiter_bonus.c\
			 ft_lstmap_bonus.c
DIR_OBS = objs/

OBJS = $(SRCS:%.c=$(DIR_OBS)%.o)
OBJS_BONUS = $(SRCS_BONUS:%.c=$(DIR_OBS)%.o)

all: $(NAME)

bonus: $(OBJS_BONUS) Makefile $(HEADER)
	ar -q $(NAME) $(OBJS_BONUS)

$(NAME): $(OBJS) Makefile $(HEADER)
	ar -r $(NAME) $(OBJS)

$(OBJS) : | $(DIR_OBS)

$(OBJS_BONUS) : | $(DIR_OBS)

$(DIR_OBS)%.o : %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) $< -o $@

$(DIR_OBS):
	mkdir -p $(DIR_OBS)

clean:
	rm -rf $(DIR_OBS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
