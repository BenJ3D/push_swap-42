# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/29 16:05:24 by cfatrane          #+#    #+#              #
#    Updated: 2022/04/15 02:37:29 by bducrocq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Binary

NAME = push_swap

# Path

SRC_PATH = ./srcs/

OBJ_PATH = ./objs/

CPPFLAGS = -I./includes/

LIBFT_PATH = ./libs/libft/



# Name

SRC_NAME =	main.c			\
			utils.c			\
			check_arg.c		\
			error.c

OBJ_NAME = $(SRC_NAME:.c=.o)

# Files

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

# Flags

LDFLAGS = -L./libs/libft/

LFT = -lft

CC = gcc $(CFLAGS) $(SANITIZE)

CFLAGS =# -Wall -Wextra -Werror
SANITIZE = -fsanitize=address -g3

# Rules

all: $(NAME) 

$(NAME): $(LIBFT) $(OBJ) 
	@make -C./libs/libft/
	@echo "\033[34mCreation of $(NAME) ...\033[0m"
	@$(CC) $(MAIN) $(LDFLAGS) $(LFT) $(OBJ) -o $@ $(MLX)
	@echo "\033[32m$(NAME) created\n\033[0m"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CPPFLAGS) -o $@ -c $<

$(LIBFT):
	@make -C./libs/libft/

${GNL}:
	@make -C ./libs/gnl

clean:
	@make clean -C ./libs/libft/
	@echo "\033[33mRemoval of .o files of $(NAME) ...\033[0m"
	@rm -f $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@echo "\033[31mFiles .o deleted\n\033[0m"

fclean: clean
	@make fclean -C ./libs/libft/
	@echo "\033[33mRemoval of $(NAME)...\033[0m"
	@rm -f $(NAME)
	@echo "\033[31mBinary $(NAME) deleted\n\033[0m"

re: fclean all

norme:
	norminette $(SRC)
	norminette ./includes/*.h
	norminette $(LIBFT_PATH)*.c


git:
	git add .
	git commit -m "$m"
	git push

.PHONY: all, clean, fclean, re