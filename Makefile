NAME = push_swap

CC = cc

CFLAGS = -Werror -Wall -Wextra -g3

RM = rm -rf

SRCS = 	src/push_swap.c src/utils.c \
		src/pa.c src/pb.c src/ra.c src/rb.c src/rr.c \
		src/rra.c src/rrb.c src/rrr.c \
		src/sa.c src/sb.c src/ss.c \
		libft/libft.a \

$(NAME) :
	make all -C libft
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

all : $(NAME)

clean :
	$(RM) $(NAME)
	make clean -C libft

fclean : clean
	$(RM) $(NAME)
	make fclean -C libft

re : fclean all