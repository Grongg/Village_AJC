CC		=	gcc

NAME	=	village

INCLUDE	=	include

CFLAGS	=	-Wall -Wextra -O2 -I$(INCLUDE)

SRCS	=	src/main.c \
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