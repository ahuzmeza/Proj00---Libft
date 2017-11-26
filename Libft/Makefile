


NAME = libft.a

HEADERS = /libft.h

FUNCTIONS =	ft_strlen \
		ft_strcmp \
		ft_strncmp \
		ft_strcpy \
		ft_strncpy \
		ft_strcat \
		ft_strncat \
		ft_strlcat \
		ft_strdup \
		ft_strchr \
		ft_strrchr \
		ft_strstr \
		ft_strnstr \
		ft_isalpha \
		ft_tolower \
		ft_toupper \
		ft_isdigit \
		ft_isascii \
		ft_isprint \
		ft_isalnum \
		ft_memset \
		ft_bzero \
		is_delimiter \
		ft_putchr \
		ft_putstr
		 
SRC = $(patsubst %,%.c,$(FUNCTIONS))
OBJ = $(patsubst %,%.o,$(FUNCTIONS))

# FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re test

all: $(NAME)

$(NAME):
	# add flags
	gcc -I $(HEADERS) -c $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all




test:
	@gcc test_functions.c libft.a
	@./a.out
	@rm a.out
