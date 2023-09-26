# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 16:02:29 by ale-tron          #+#    #+#              #
#    Updated: 2023/09/22 09:53:55 by ale-tron         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c

OBJS	= $(SRCS:.c=.o)

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

all:	$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean 
	$(RM) $(NAME)

re: fclean all

.PHONY:			all clean fclean re
