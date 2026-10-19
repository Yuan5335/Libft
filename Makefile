NAME = libft.a
SRCS = $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)
INC = -I.
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< $(INC) -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
