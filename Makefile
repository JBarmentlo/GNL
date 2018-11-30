NAME=GNL
CFLAGS=-Wall -Wextra -Werror
SOURCES= ft_bzero.c ft_memcpy.c ft_putchar.c ft_memccpy.c ft_memset.c \
		 ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strlen.c ft_strstr.c \
		 ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
		 ft_isdigit.c ft_isalnum.c ft_isprint.c ft_tolower.c ft_toupper.c \
		 ft_isascii.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c \
		 ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
		 ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c \
		 ft_strsplit.c ft_itoa.c ft_putstr.c ft_putendl.c ft_putnbr.c \
		 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		 ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
		 ft_lstmap.c stralloc.c ft_isspace.c ft_lstcount.c \
		 ft_memchr.c ft_memcmp.c ft_memmove.c ft_strcat.c ft_strcpy.c \
		 ft_strdup.c ft_strncat.c ft_strncpy.c ft_strlensafe.c \
		 ft_strequ_nocase.c get_next_linee.c mainn.c dlist.c
OBJ_FOLDER=out
OUT=$(addprefix $(OBJ_FOLDER)/,$(SOURCES:.c=.o))
TESTS=tests/main_test.c $(addprefix tests/,$(SOURCES:.c=_test.c))

all: $(OUT) $(NAME)

$(NAME): $(OUT)
	@gcc $(OUT) -o $(NAME)

$(OBJ_FOLDER)/%.o: %.c
	@mkdir -p $(OBJ_FOLDER)
	@gcc $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ_FOLDER)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test: all
	gcc $(CFLAGS) -I . $(TESTS) libft.a
