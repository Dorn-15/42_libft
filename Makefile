NAME = libft.a

SRCS_DIR = ./srcs
SRCS = $(wildcard $(SRCS_DIR)/ft_*.c)
OBJS = $(SRCS:.c=.o)
HEADER = libft.h

CFLAGS = -Wall -Wextra -Werror -I.
CC = gcc

AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

