NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

SRCS =	ft_printf.c\
		ft_printf_utils.c\
		ft_puthex.c

OBJS = $(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY: all clean fclean re
