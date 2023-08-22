CC		=	gcc

NAME	=	village

CFLAGS	=	-Wall -Wextra -O2

SRCS	=	src/main.c \
			src/village.c \
			src/mine.c \
			src/caserne.c \
			src/scierie.c \
			src/hotelDeVille.c \
			src/ressources.c \
			src/raffinerie.c

OBJS	=	$(SRCS:.c=.o)

all: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm $(OBJS)

fclean:
	rm $(NAME)
	make clean

re: clean fclean all re

.PHONY: clean fclean re all