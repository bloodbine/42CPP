NAME	=	ArrayTemplate

OBJDIR	=	obj/

MAIN	=	main

SOURCE	= $(MAIN)

SRC	= $(addsuffix .cpp, $(SOURCE))
OBJ	= $(addprefix $(OBJDIR), $(addsuffix .o, $(SOURCE)))

CC		= c++
RMF		= rm -f
RMRF	= rm -rf
RMDIR	= rmdir
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

$(OBJDIR)%.o: %.cpp
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	$(RMRF) $(OBJ)
	$(RMRF) $(OBJDIR)

fclean: clean
	$(RMF) $(NAME)

re: fclean all

all: $(NAME)

.PHONY: all clean fclean re libmake