SRC = src/push_swap.c  src/ft_isnumber.c
HEADER = includes/push_swap.h

NAME = push_swap
OBJ = $(SRC:.c=.o)
CC = gcc
INCLUDES	= -I ./libft -I ./src
LIBFT		= ./libft/libft.a
LIBS		= -L./libft -lft
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C ./libft
	$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean :
	$(MAKE) -C ./libft clean
	rm -f $(OBJ)

fclean : clean
	$(MAKE) -C ./libft fclean
	rm -f $(NAME)

re : fclean $(NAME)

.PHONY: all clean fclean re