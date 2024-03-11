CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
SRCS = ./src/push_swap.c ./src/utils/ft_split.c ./src/utils/utils.c ./src/utils/utils2.c ./src/swap.c ./src/push.c ./src/rotate.c ./src/reverse_rotate.c ./src/insert_index.c ./src/is_sorted.c ./src/mini_sort.c ./src/radix_sort.c ./src/check_dup.c ./src/init_stack.c ./src/sort_till_5.c

OBJS = $(SRCS:.c=.o)

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re program
