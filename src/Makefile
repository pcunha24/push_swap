CC = cc
#CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
SRCS = push_swap.c ./utils/ft_split.c ./utils/utils.c instructions.c

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
