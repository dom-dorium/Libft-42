# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: djeannot <djeannot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 11:11:49 by djeannot          #+#    #+#              #
#    Updated: 2022/04/29 12:29:41 by djeannot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

RM			= rm -f

LIB			= ar rcs

SRCS		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_memcmp.c \
			ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_nblen.c \
			ft_isprime.c

OBJS		= $(SRCS:.c=.o)


SRCS_BONUS	= ft_lstadd_front.c ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c  ft_lstdelone.c ft_lstclear.c ft_lstiter.c

OBJS_BONUS	= $(SRCS_BONUS:.c=.o)

all : $(NAME)


$(NAME):	$(OBJS)

			$(LIB) $(NAME) $(OBJS)

clean :

			$(RM) $(OBJS) $(OBJS_BONUS)

fclean :	clean
			$(RM) $(NAME)

re :		fclean $(NAME)

bonus :		$(OBJS) $(OBJS_BONUS)
			$(LIB) $(NAME) $(OBJS) $(OBJS_BONUS)

.PHONY:		all clean fclean re bonus
