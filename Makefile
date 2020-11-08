# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchristi <jchristi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/07 11:53:52 by toliander         #+#    #+#              #
#    Updated: 2020/11/08 03:41:16 by jchristi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memset.c 		\
		ft_memalloc_bonus.c     \
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memccpy.c		\
		ft_memmove.c 	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlen.c		\
		ft_isalpha.c 	\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_strchr.c		\
		ft_strnew.c		\
		ft_strdel_bonus.c	\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_strrchr.c		\
		ft_strncmp.c		\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_strnstr.c		\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c 	\
		ft_strtrim.c		\
		ft_split.c		\
		ft_itoa.c		\
		ft_strmapi.c		\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c

SRCSB =	$(SRCS) \
		ft_lstnew.c			\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		ft_lstclear.c		\
		ft_lstdelone.c		\
		ft_lstiter.c		\
		ft_lstmap.c			\
		

NAME = libft.a

OBJS = $(SRCS:.c=.o)

OBJSB = $(SRCSB:.c=.o)

CC = gcc

CC_FLAGS = -Wall -Wextra -Werror

all: $(NAME)



$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	ranlib libft.a
	@echo "Libft Done !"

%.o : %.c libft.h
	@echo "Compiling: $<"
	@$(CC) $(CC_FLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJSB)
	@ar rc $(NAME) $(OBJS) $(OBJSB)
	@echo "Libft Bonus Done !"