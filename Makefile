# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ckanoa <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/01 13:47:47 by ckanoa            #+#    #+#              #
#    Updated: 2017/09/16 16:06:30 by ckanoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
CC = clang
LIB_NAME = ft
LIBDIR = libft
FLAGS = -Wall -Wextra -Werror -O3

HEADERS = includes

SOURCES = srcs/draw.c \
		  srcs/main.c \
		  srcs/key.c \
		  srcs/error.c \

OBJECTS = $(SOURCES:.c=.o)

$(NAME): $(LIBDIR)/lib$(LIB_NAME).a $(OBJECTS)
	make -C mlx
	@$(CC) $(FLAGS) -L $(LIBDIR) -l $(LIB_NAME) -o $@ $^ mlx/libmlx.a -framework OpenGL -framework AppKit
	@echo "compiling [ $(NAME) ] SUCCESS"

$(LIBDIR)/lib$(LIB_NAME).a : 
	@$(MAKE) -C $(LIBDIR)

all: $(NAME)

%.o: %.c $(HEADERS)/$(NAME).h
	@$(CC) $(FLAGS) -I $(HEADERS) -c $< -o $@

clean:
	@rm -f $(OBJECTS)
	@make clean -C $(LIBDIR)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBDIR)

re: fclean $(NAME)

.PHONY: all, clean, fclean, re
