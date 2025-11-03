NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
DF = "functions/"
DC = "commands/"
SRC = $(DF)ft_strcmp.c\
	$(DF)ft_strlen.c\
	$(DF)ft_bbl.c\
	$(DF)ft_strjoin.c\
	$(DF)ft_memset.c\
	$(DF)ft_lenfill.c\
	$(DF)ft_strcpy.c\
	$(DF)ft_setalloc.c\
	$(DC)struct_command.c\


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
