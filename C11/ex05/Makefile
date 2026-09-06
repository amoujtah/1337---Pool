NAME = do-op

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I includes
RM = rm -f

SRC = srcs/main.c \
	srcs/ft_putchar.c \
	srcs/ft_putstr.c \
	srcs/ft_putnbr.c \
	srcs/ft_doop.c \
	srcs/ft_atoi.c \
	srcs/cal.c

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c includes/ft.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
