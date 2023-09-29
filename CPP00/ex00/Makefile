# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpasztor <gpasztor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/08 16:19:25 by gpasztor          #+#    #+#              #
#    Updated: 2023/08/08 16:35:44 by gpasztor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
OBJDIR	= obj/
SRC		=	megaphone.cpp
SRCOBJ	= $(patsubst %.cpp, $(OBJDIR)%.o, $(SRC))

CC		= clang++
RM		= rm -f
RMDIR	= rmdir
CFLAGS	= -Wall -Wextra -Werror -std=c++98

$(OBJDIR)%.o: %.cpp
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): libmake $(SRCOBJ)
	@$(CC) $(SRCOBJ) $(CFLAGS) -o $(NAME)
	@curl https://icanhazdadjoke.com/ && echo

clean:
	$(RM) $(SRCOBJ)
	@if [ -d "obj" ]; then rmdir obj; fi

fclean: clean
	$(RM) $(NAME)

re: fclean all

all: $(NAME)

.PHONY: all clean fclean re libmake
