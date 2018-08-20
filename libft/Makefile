NAME = libft.a

SRCS =	ft_atoi.c			\
		ft_memcpy.c			\
		ft_bzero.c			\
		ft_factorial.c		\
		ft_isalnum.c		\
		ft_isalpha.c		\
		ft_isascii.c		\
		ft_isdigit.c		\
		ft_islower.c		\
		ft_isupper.c		\
		ft_memcmp.c			\
		ft_memccpy.c		\
		ft_memchr.c			\
		ft_memmove.c		\
		ft_power.c			\
		ft_strlcat.c		\
		ft_strcpy.c			\
		ft_strnstr.c		\
		ft_strncpy.c		\
		ft_strcmp.c			\
		ft_strdup.c			\
		ft_swap_int.c		\
		ft_strcat.c			\
		ft_strstr.c			\
		ft_strlen.c			\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_swap_str.c		\
		ft_strrchr.c		\
		ft_strncmp.c		\
		ft_strncat.c		\
		ft_strchr.c			\
		ft_sqrt.c			\
		ft_rev.c			\
		ft_memset.c			\
		ft_isprint.c		\
		ft_memalloc.c		\
		ft_memdel.c			\
		ft_strnew.c			\
		ft_strdel.c			\
		ft_strclr.c			\
		ft_striter.c		\
		ft_striteri.c		\
		ft_strmap.c			\
		ft_strmapi.c		\
		ft_strequ.c			\
		ft_strnequ.c		\
		ft_strsub.c			\
		ft_strjoin.c		\
		ft_strtrim.c		\
		ft_strsplit.c		\
		ft_itoa.c			\
		ft_putchar.c		\
		ft_putstr.c			\
		ft_putendl.c		\
		ft_putnbr.c			\
		ft_putchar_fd.c		\
		ft_putstr_fd.c		\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c		\
		ft_lstnew.c			\
		ft_lstdelone.c		\
		ft_lstdel.c			\
		ft_lstadd.c			\
		ft_lstiter.c		\
		ft_lstmap.c			\
		ft_lstrev.c			\
		ft_highlow_sqrt.c	\
		ft_lstcount.c		\
		ft_sizefd.c			\
		ft_strfd.c			\


.PHONY: all clean fclean re

SRCO = $(SRCS:.c=.o)

INCL = -I ./

all: $(NAME)

$(NAME): $(SRCO)
	ar rc $(NAME) $(SRCO)
	ranlib $(NAME)

%.o: %.c
	@printf "\rgcc -c -Wall -Wextra -Werror -o $@ $^                    "
	@gcc -c -Wall -Wextra -Werror -o $@ $^ -I ./includes/

clean: 
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all
