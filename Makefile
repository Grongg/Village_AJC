CC		=	gcc

NAME	=	village

CFLAGS	=	-Wall -Wextra -O2

SRCS	=	src/main.c \
			src/caserne.c \
			src/display.c\
			src/hotelDeVille.c \
			src/mine.c \
			src/raffinerie.c\
			src/ressources.c \
			src/scierie.c \
			src/village.c 

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