NAME =  	libft.a
SRC =  ft_abs.c ft_atoi.c ft_atol.c\
			ft_atoll.c ft_bzero.c ft_calloc.c\
			ft_isalnum.c ft_isalpha.c ft_isascii.c\
			ft_isdigit.c ft_isprint.c ft_memchr.c\
			ft_memcmp.c ft_memcpy.c ft_memmove.c\
			ft_memset.c ft_strchr.c ft_strdup.c\
			ft_strlcat.c ft_strlcpy.c ft_strcpy.c ft_strcat.c\
			ft_strlen.c ft_strncmp.c ft_strcmp.c\
			ft_strnstr.c ft_strrchr.c\
			ft_tolower.c ft_toupper.c ft_substr.c\
			ft_strjoin.c ft_strtrim.c ft_split.c\
			ft_itoa.c ft_strmapi.c ft_striteri.c\
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
			ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c\
			ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c\
			ft_max.c ft_fmax.c ft_free_split.c ft_memdel.c\
			ft_splitlen.c ft_itoa_base.c\
			get_next_line.c get_next_line_utils.c

HEADERS = 	-I ./includes/

O_FILES_LIBFT = $(SRC:.c=.o)
D_FILES_LIBFT = $(SRC:.c=.d)

CFLAGS = -Wall -Wextra -Werror

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) : $(O_FILES_LIBFT)
	ar rc $(NAME) $?
	ranlib $(NAME)

%.o : %.c
	cc $(CFLAGS) $(HEADERS) -c $< -o $@ -MD

clean :
	rm -f $(O_FILES_LIBFT) $(D_FILES_LIBFT)

fclean : clean
	rm -f $(NAME)

re : fclean all

-include $(D_FILES_LIBFT)