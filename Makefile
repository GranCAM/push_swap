NAME = push_swap

CC = cc

CFLAGS = -Werror -Wall -Wextra -g3

RM = rm -rf

LIBFT = ./libft/libft.a

SRCS = 	src/push_swap.c src/parse_utils.c src/stack_utils.c src/stack_utils2.c src/sort_utils.c src/sort_utils2.c src/splitplus.c\
		src/pa.c src/pb.c src/ra.c src/rb.c src/rr.c \
		src/rra.c src/rrb.c src/rrr.c \
		src/sa.c src/sb.c src/ss.c \

LIBFT_SRC = libft/ft_bzero.c libft/ft_isalnum.c libft/ft_isalpha.c libft/ft_isascii.c \
			libft/ft_isdigit.c libft/ft_isprint.c libft/ft_memchr.c libft/ft_memcmp.c \
			libft/ft_memcpy.c libft/ft_memmove.c libft/ft_memset.c libft/ft_strlcpy.c \
			libft/ft_strlen.c libft/ft_strncmp.c libft/ft_strnstr.c libft/ft_tolower.c \
			libft/ft_toupper.c libft/ft_atoi.c libft/ft_strchr.c libft/ft_strrchr.c \
			libft/ft_strlcat.c libft/ft_strdup.c libft/ft_strjoin.c \
			libft/ft_substr.c libft/ft_calloc.c libft/ft_strtrim.c \
			libft/ft_itoa.c libft/ft_strmapi.c libft/ft_striteri.c libft/ft_putchar_fd.c \
			libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c \
			libft/ft_split.c libft/ft_freematrix.c libft/ft_strjoin_free.c \
			libft/ft_atol.c libft/ft_bubble_sort.c libft/ft_word_count.c\

LIBFT_OBJS = $(LIBFT_SRC:%.c=%.o)

OBJS = $(SRCS:%.c=%.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT): $(LIBFT_OBJS)
	@make -C ./libft

all : $(NAME)

clean :
	$(RM) $(OBJS)
	make clean -C libft

fclean : clean
	$(RM) $(NAME)
	make fclean -C libft

re : fclean all

.PHONY: all clean fclean re