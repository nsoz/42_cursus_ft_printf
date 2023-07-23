NAME		= libftprintf.a

SRCS		= ft_printf.c printchar.c printdecimal.c \
			printlowerhexa.c printptr.c printstr.c \
			printunnbr.c printuperhexa.c \
			
OBJS		= $(SRCS:%.c=%.o)

FLAGS		= -Wall -Werror -Wextra

$(NAME):
	gcc $(FLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re