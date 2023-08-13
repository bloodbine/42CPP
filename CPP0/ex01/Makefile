NAME	=	Phonebook

OBJDIR	=	obj/

MAIN	=	Main
UTIL	=	Contact		\
			Phonebook	\

SOURCE	= $(MAIN)

SRC	= $(addsuffix .cpp, $(SOURCE))
OBJ	= $(addprefix $(OBJDIR), $(addsuffix .o, $(SOURCE)))

CC		= cc
RMF	= rm -f
RMRF	= rm -rf
RMDIR	= rmdir
CFLAGS	= -Wall -Wextra -Werror

$(OBJDIR)%.o: $(SRCDIR)%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): libmake $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	$(RMRF) $(OBJ)
	$(RMRF) $(OBJDIR)

fclean: clean
	$(RMF) $(NAME)
	make fclean -C ./includes/libft

re: fclean all

all: $(NAME)

.PHONY: all clean fclean re libmake