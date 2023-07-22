SRCS = ft_printf.c printchar.c printdecimal.c printlowerhexa.c printptr.c printstr.c printunnbr.c printuperhexa.c \


OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
LIBC = ar rc
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} $(OBJS)

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY : all clean fclean re
