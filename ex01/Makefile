# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 13:53:49 by kichlee           #+#    #+#              #
#    Updated: 2023/11/20 14:17:23 by kichlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	PhoneBook
CC		=	c++ 
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf
SRCS	=	PhoneBook.cpp \
			Contact.cpp \
			main.cpp
OBJS	=	${SRCS:.c=.o}

all	:
	@$(MAKE)  $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@$(RM)

fclean : clean
	@$(RM) $(NAME)

re :
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY : all clean fclean re