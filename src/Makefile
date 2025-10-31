NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_strcmp.c\
	ft_strlen.c\
	ft_bbl.c\
	ft_strjoin.c\
	ft_memset.c\
	ft_lenfill.c\
	ft_strcpy.c\
	ft_setalloc.c\


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
