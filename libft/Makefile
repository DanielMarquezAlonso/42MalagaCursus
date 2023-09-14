SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_strlcpy.c
NAME = libft.a
OBJ = ${SRC:.c=.o}
CC = gcc
FLAGS = -Wall -Wextra -Werror

all : ${NAME}

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)

.PHONY: all clean fclean re

# SRC = ft_*.c
# NAME = libft.a
# OBJ = ${SRC:.c=.o}
# FLAGS = -Wall -Wextra -Werror

# all : ${NAME}

# $(NAME):
# 	cc $(FLAGS) $(SRC) -o $(NAME)

# clean :
# 	rm -f ${OBJ}

# fclean : clean
# 	rm -f $(NAME)
 
# re : all fclean 


# $(NAME): $(OBJ)
# 	ar rc $(NAME) $(OBJ)
# 	ranlib $(NAME)

# %.o: %.c
# 	cc $(FLAGS) -c $< -o $@