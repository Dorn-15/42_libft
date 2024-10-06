SRCS_DIR = .
SRCS = $(wildcard $(SRCS_DIR)/ft_*.c)
OBJS = $(SRCS:.c=.o)

SRCS_SHARED = $(wildcard $(SRCS_DIR)/ft_*.c)
OBJS_SHARED = $(SRCS_SHARED:.c=.so.o)

HEADERS = libft.h
LIB = libft.a

CFLAGS = -Wall -Wextra -Werror -I $(SRCS_DIR) -fPIC
CC = gcc

AR = ar rcs

all: $(LIB)

$(LIB): $(OBJS)
	$(AR) $@ $^

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

%.so.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(OBJS_SHARED)

fclean: clean
	rm -f $(LIB) libft.so

re: fclean all

so: $(OBJS_SHARED)
	$(CC) -shared -o libft.so $(OBJS_SHARED)

.PHONY: all clean fclean re so

