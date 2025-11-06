NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
DF = functions/
DC = commands/
SRC = $(DF)printable.c\
	$(DF)warping.c\
	$(DF)alloc.c\
	$(DC)list_cmd.c\
	$(DC)cmd_help.c\
	$(DC)cmd_bbl.c\

OBJ = $(SRC:.c=.o)

all : $(NAME) 

$(NAME) : $(OBJ)
	ar crs $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
