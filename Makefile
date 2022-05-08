# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/29 16:05:24 by cfatrane          #+#    #+#              #
#    Updated: 2022/05/08 20:12:15 by bducrocq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Binary 

NAME = push_swap

# Path

SRC_PATH = ./srcs/

OBJ_PATH = ./objs/

CPPFLAGS = -I./includes/

LIBFT_PATH = ./libs/libft/libft.a

HEADER = ./includes/push_swap.h


# Name

SRC_NAME =	main.c			\
			utils.c			\
			check_arg.c		\
			error.c			\
			mylst.c			\
			push_swap.c		\
			ft_ps_atoi_long.c \
			sa_sb_ss.c

OBJ_NAME = $(SRC_NAME:.c=.o)

# Files

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

# Flags

LDFLAGS = -L./libs/libft/

LFT = -lft

CC = gcc $(CFLAGS) $(SANITIZE) $(LLDBFLAG)

CFLAGS =# -Wall -Wextra -Werror
SANITIZE = -fsanitize=address
LLDBFLAG =  -g3

# Rules

all: libft $(NAME) 


$(NAME): $(LIBFT_PATH) $(OBJ) $(HEADER) ./Makefile
ifeq ($(shell uname -s), Linux)
	@echo "\033[34mCreation of $(NAME) on linux ...\033[0m"
	@$(CC) $(OBJ) $(LIBFT_PATH) -o $@
	@echo "\033[32m$(NAME) created\n\033[0m"
else
	@echo "\033[34mCreation of $(NAME) ...\033[0m"
	@$(CC) $(LIBFT_PATH) $(OBJ) -o $@
	@echo "\033[32m$(NAME) created\n\033[0m"
endif

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	@$(CC) $(CPPFLAGS) -o $@ -c $<

libft:
	@make -C./libs/libft/

clean:
	@make clean -C ./libs/libft/
	@echo "\033[33mRemoval of .o files of $(NAME) ...\033[0m"
	@rm -f $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@echo "\033[31mFiles .o deleted\n\033[0m"

fclean: clean
	@make fclean -C ./libs/libft/
	@echo "\033[33mRemoval of $(NAME)...\033[0m"
	@rm -rf $(NAME)
	@echo "\033[31mBinary $(NAME) deleted\n\033[0m"

re: fclean all

norme:
	norminette ./srcs/
	norminette ./includes/*.h
	norminette $(LIBFT_PATH)*.c


git:
	@git add .
	@printf "Message of the commit: " && read msg && git commit -m "$$msg"
	@git push

.PHONY: all, clean, fclean, re

#	@printf "\r\033[K\tCompilation de $(COLOR_PURPLE)$< ==> $@\$(COLOR_NORM)"
