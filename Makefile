NAME	= bsq

SRCS	=	my_getnbr.c	\
		find_biggest_square.c \
		read_map.c	\
		print_map.c \
		my_putchar.c	\
		my_putstr.c	\

all: $(NAME)

$(NAME):
	gcc -g3 main.c $(SRCS) -o bsq
clean:
	rm $(OBJS)
fclean:
	rm $(NAME)
re: fclean all