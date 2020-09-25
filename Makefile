# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlopez-c <jlopez-c@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/01 22:00:15 by jlopez-c          #+#    #+#              #
#    Updated: 2020/09/01 17:55:28 by jlopez-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT =	libft.a

LIB_DIR 	= 	libft/
OBJ_DIR 	=	obj/
SRC_DIR 	= 	src/
SRC_FILES =		ft_printf.c char_str.c digit.c hexa.c percent.c ptr.c \
				unsigned.c flags_char.c flags_digit.c flags_ptr.c \
				flags_str.c flags_hexa.c flags_unsigned.c
				
SRC = $(SRC_FILES:%=$(SRC_DIR)%)

OBJ_FILES = $(SRC_FILES:.c=.o)
OBJ = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

LFLAGS = -I includes/
FLAGS = -Wall -Wextra -Werror

CC = cc
RM = rm -rf
AR = ar rcs
RANLIB = ranlib

all:	$(OBJ_DIR) $(NAME)

$(OBJ_DIR):
		@mkdir -p $(OBJ_DIR)
		@echo Create: ft_printf Object directory

$(NAME): 	$(OBJ)
			@echo Loading libft
			@make -C $(LIB_DIR)
			@cp $(LIB_DIR)$(LIBFT) ./$(NAME)
			@echo Working
			@$(AR) $(NAME) $(OBJ)
			@echo COMPLETE

$(OBJ): $(SRC)
		@$(MAKE) $(OBJ_FILES)

$(OBJ_FILES):
		@$(CC) $(FLAGS) $(LFLAGS) -c -o $(OBJ_DIR)$@ $(SRC_DIR)$(@:%.o=%.c)
clean:	
		@$(RM) $(OBJ_DIR)
		@$(RM) $(OBJS)
		@make -C $(LIB_DIR) clean

fclean:	clean
		@$(RM) $(NAME)
		@make -C $(LIB_DIR) fclean
re: fclean all

.PHONY: all clean fclean re
