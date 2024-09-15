# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: febouana <febouana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/11 18:06:12 by febouana          #+#    #+#              #
#    Updated: 2024/09/15 18:00:58 by febouana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = libft.a
OBJ_DIR = obj
HEADER = libft.h

SRC_M = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
        ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
        ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
        ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
        ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
        ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
        ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
        ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(addprefix $(OBJ_DIR)/, $(SRC_M:.c=.o))
BOBJS = $(addprefix $(OBJ_DIR)/, $(SRC_B:.c=.o))


BANNER_M = "\033[0;37m\n ██╗     ██╗██████╗ ███████╗████████╗ \n\
 ██║     ██║██╔══██╗██╔════╝╚══██╔══╝ \n\
 ██║     ██║██████╔╝█████╗     ██║    \n\
 ██║     ██║██╔══██╗██╔══╝     ██║    \n\
 ███████╗██║██████╔╝██║        ██║    \n\
 ╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝    \n\
 								by febouana \n"

BANNER_B = "\033[0;37m\n ██╗     ██╗██████╗ ███████╗████████╗   ██████╗  ██████╗ ███╗   ██╗██╗   ██╗███████╗  \n\
 ██║     ██║██╔══██╗██╔════╝╚══██╔══╝   ██╔══██╗██╔═══██╗████╗  ██║██║   ██║██╔════╝  \n\
 ██║     ██║██████╔╝█████╗     ██║      ██████╔╝██║   ██║██╔██╗ ██║██║   ██║███████╗  \n\
 ██║     ██║██╔══██╗██╔══╝     ██║      ██╔══██╗██║   ██║██║╚██╗██║██║   ██║╚════██║  \n\
 ███████╗██║██████╔╝██║        ██║      ██████╔╝╚██████╔╝██║ ╚████║╚██████╔╝███████║  \n\
 ╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝      ╚═════╝  ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝ ╚══════╝  \n\
								by febouana \n"		

$(NAME): $(OBJS) $(HEADER)
	@ar -rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo $(BANNER_M)

all: $(NAME)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

bonus: $(OBJS) $(BOBJS)
	@ar -rc $(NAME) $(OBJS) $(BOBJS)
	@ranlib $(NAME)
	@echo $(BANNER_B)

clean:
	@echo "\033[0;37m[🧹...cleaning]"
	@$(RM) $(OBJS) $(BOBJS)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
