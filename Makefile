NAME = libft.a

SRCS_DIR = .
SRCS = $(wildcard $(SRCS_DIR)/ft_*.c)
OBJS = $(SRCS:.c=.o)

HEADERS = libft.h

CFLAGS = -Wall -Wextra -Werror -fPIC -I $(SRCS_DIR)
CC = gcc

AR = ar rcs
RM = rm -f

# Compilation de la lib statique
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Compilation de la lib dynamique
so: $(OBJS)
	$(CC) -shared -o libft.so $(OBJS)

# Nettoyage des fichiers objets
clean:
	$(RM) $(OBJS)

# Nettoyage complet (fichiers objets + librairie statique/dynamique)
fclean: clean
	$(RM) $(NAME) libft.so

# Recompilation complète
re: fclean all

.PHONY: all clean fclean re so
