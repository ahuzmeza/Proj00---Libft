


NAME = libft.a
SOURCE_DIR = src/
HEADER_DIR = includes/
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
		ft_strstr 
		 
		
# FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	# add flags
	gcc -I $(HEADER_DIR) -c $(patsubst %,$(SOURCE_DIR)%.c,$(FUNCTIONS))
	ar rcs $(NAME) $(patsubst %,%.o,$(FUNCTIONS))

clean:
	rm -f $(patsubst %,%.o,$(FUNCTIONS))

fclean: clean
	rm -f $(NAME)

re: fclean all
