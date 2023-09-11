SRC = ft_*.c
NAME = libft.a
OBJ = ${SRC:.c=.o}
FLAGS = -Wall -Wextra -Werror

all : ${NAME}

$(NAME):
	cc $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f $(NAME)

re : all fclean 