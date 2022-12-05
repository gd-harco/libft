# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gd-harco <gd-harco@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 17:46:58 by gd-harco          #+#    #+#              #
#    Updated: 2022/12/05 10:44:03 by gd-harco         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -c -Wall -Werror -Wextra
NAME = libft.a
HEADERFOLDER = includes/

# srcs files for all different cat
SRCS_CHAR = srcs/char/*
SRCS_IO = srcs
SRCS =

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

.PHONY: clean fclean re bonus
