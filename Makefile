# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spacotto <spacotto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/12 15:30:27 by spacotto          #+#    #+#              #
#    Updated: 2025/10/12 17:11:21 by spacotto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a
CC 	:= cc
FLAGS	:= -Wall -Wextra -Werror

# SOURCES
SRC_CM	:= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	   ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	   ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	   ft_strchr.c ft_strrchr.c ft_strncmp.c \
	   ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c

SRC_CMM	:= ft_calloc.c ft_strdup.c

SRC_FTM	:= ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	   ft_itoa.c ft_strmapi.c ft_striteri.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

SRC_FTB	:= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
	   ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
	   ft_lstclear.c ft_lstiter.c ft_lstmap.c

SRCS	:= $(SRC_CM) $(SRC_CMM) $(SRC_FTM) $(SRC_FTB)

#OBJECTS
OBJS	:= $(SRCS:.c=.o)

# RULES
all: $(NAME)

$(NAME):$(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ) : $(SRCS)
	$(CC) -c $(FLAGS) $< -o $@

clean:
	/bin/rm -rf $(OBJ_PATH) 

fclean:
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
