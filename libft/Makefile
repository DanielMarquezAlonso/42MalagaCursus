SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
		ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
		ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
		ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_memmove.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUSSRC = ft_lstnew.c
NAME = libft.a
OBJ = ${SRC:.c=.o}
BONUS_OBJ = ${BONUSSRC:.c=.o}
CC = cc
FLAGS = -Wall -Wextra -Werror

all : ${NAME}

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(OBJ) $(BONUS_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)
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

# SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
# 		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
# 		ft_memcpy.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
# 		ft_tolower.c ft_strchr.c ft_strrchr.c