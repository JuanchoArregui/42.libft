# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jarregui <jarregui@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/25 15:39:13 by jarregui          #+#    #+#              #
#    Updated: 2021/07/14 22:48:03 by jarregui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# nice tutorials about Makefile:  
#		https://stackoverflow.com/c/42network/questions/1604/1605
#		https://makefiletutorial.com/
#		https://opensource.com/article/18/8/what-how-makefile

#syntax of a typical rule:
#		target: prerequisites
#		<TAB> recipe



# VARIABLES DECLARATION:
SRC			=	ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memccpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strcpy.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c	
OBJ			=	$(SRC:%.c=%.o)
BONUS		=	ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c\
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c
BONUS_OBJ	=	$(BONUS:%.c=%.o)
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
NAME		=	libft.a
RM			=	/bin/rm -f



# RULES DECLARATION:
.PHONY:			all clean fclean re bonus

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
				@$(AR) $(NAME) $(OBJ)
				@ranlib $(NAME)
				@echo "[INFO: Library $(NAME) created]"

clean:
				$(RM) $(OBJ) $(BONUS_OBJ)
				@echo "[INFO: Objects deleted]"

fclean:			clean
				$(RM)	$(NAME)
				@echo "[INFO: $(NAME) deleted]"

re:				fclean all

bonus:			$(OBJ) $(BONUS_OBJ)
				ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)
